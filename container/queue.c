 #include <stdio.h>
 #define max 8

typedef struct {
    int head;
    int data[max];
    int tail;
} queue;
queue antrian;
void create();
int Isempty();

int Isfull();
void tampil();
void enqueue(int data);
void dequeue();

int main(){
    int lagi;
    int input;
    int pilih;
    create();
    pilih = 0;
    while (pilih != 6){
        printf("             MENU UTAMA\n");
        printf("1: Cek kondisi queue\n");
        printf("2: Tambah data (Pust)\n");
        printf("3: Keluarkan isi queue (Pop)\n");
        printf("4: Kosongkan queue\n");
        printf("5: top dari queue\n");
	printf("6: keluar\n");
        printf("Pilihan Anda:\n ");
        scanf("%d",&pilih);
        switch(pilih){
        case 1:
            if (Isempty() == 1)
                printf("queue masih kosong");
            else if ((Isempty() == 0) && (Isfull() == 0))
                printf("queue sudah terisi (belum penuh)  %d\n",antrian.data[antrian.tail]);
            else
                printf("queue sudah penuh");
        break;
        case 2:
            if (Isfull() == 1)
                printf("queue Penuh.");
            else
            {
                printf("Masukkan data: ");
                scanf("%d",&input);
                enqueue(input);
                printf("data baru: %d\n",antrian.data[antrian.tail]);
                printf("IsFull: %d\n",Isfull());
                printf("IsEmpty: %d\n",Isempty());
            }
        break;
        case 3:
            printf("data yang dikeluarkan bernilai: %d \n",antrian.data[antrian.tail]);
            dequeue();
        break;
        case 4:
            while (Isempty() == 0)
            {
                printf("data yang dikeluarkan bernilai: %d \n",antrian.data[antrian.tail]);
                dequeue();
            }
            printf("queue sudah kosong");
        break;
        
	case 5:
	    printf(" head dari antrian: %d\n" ,antrian.data[1]);
	break;
	case 6:
            printf("Terimakasih ");
        break;   
        }
    }
}




void create(){
	antrian.head=antrian.tail=-1;
}

int isempty(){
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int isfull(){
	if(antrian.tail==max-1) 
		return 1;
	else
		return 0;
}

void enqueue(int data){
    antrian.head = antrian.head + 1;
    antrian.data[antrian.head] = data;
}

void dequeue(){
    int i;
    int e =antrian.data[antrian.head];
    for(i=antrian.head;i<=antrian.tail-1;i++){
	antrian.data[i] = antrian.data[i+1];
	}
	antrian.tail--;
	
}

void clear(){
	antrian.head=antrian.tail=-1;
	printf("data clear");
}
void tampil(){
     if(isempty()==0){
	for(int i=antrian.head;i<=antrian.tail;i++){
	printf("%d  ",antrian.data[i]);
	}
    }else printf("data kosong\n");
}
