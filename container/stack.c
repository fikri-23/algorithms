 #include <stdio.h>
 #define max 5

typedef struct {
    int top;
    int data[max+1];
}stack;

stack tumpukan;
void createEmpty();
int IsEmpty();
int IsFull();
int tp();
void push(int x);
void pop();

int main(){
    int lagi;
    int input;
    int pilih;
    createEmpty();
    pilih = 0;
    while (pilih != 6){
        printf("             MENU UTAMA\n");
        printf("1: Cek kondisi Stack\n");
        printf("2: Tambah data (Pust)\n");
        printf("3: Keluarkan isi stack (Pop)\n");
        printf("4: Kosongkan stack\n");
        printf("5: top dari stack\n");
	printf("6: keluar\n");
        printf("Pilihan Anda:\n ");
        scanf("%d",&pilih);
        switch(pilih){
        case 1:
            if (IsEmpty() == 1)
                printf("Stack masih kosong");
            else if ((IsEmpty() == 0) && (IsFull() == 0))
                printf("Stack sudah terisi (belum penuh)");
            else
                printf("Stack sudah penuh");
        break;
        case 2:
            if (IsFull() == 1)
                printf("Stack Penuh.");
            else
            {
                printf("Masukkan data: ");
                scanf("%d",&input);
                push(input);
                printf("Top baru: %d\n",tumpukan.data[tumpukan.top]);
                printf("IsFull: %d\n",IsFull());
                printf("IsEmpty: %d\n",IsEmpty());
            }
        break;
        case 3:
            printf("Top yang dikeluarkan bernilai: %d \n",tumpukan.data[tumpukan.top]);
            pop();
        break;
        case 4:
            while (IsEmpty() == 0)
            {
                printf("Top yang dikeluarkan bernilai: %d \n",tumpukan.data[tumpukan.top]);
                pop();
            }
            printf("Stack sudah kosong");
        break;
        
	case 5:
	    printf(" top dari stack: %d\n" ,tp());
	break;
	case 6:
            printf("Terimakasih ");
        break;   
        }
    }
}

void createEmpty(){
    tumpukan.top = 0;
}

void push(int x){
    tumpukan.top = tumpukan.top + 1;
    tumpukan.data[tumpukan.top] = x;
}

void pop(){
    tumpukan.top = tumpukan.top - 1;
}

int IsEmpty(){
    if (tumpukan.top == 0)
        return 1;
    else
        return 0;
}

int IsFull(){
    if (tumpukan.top == max)
        return 1;
    else
        return 0;
}
int tp(){
   return tumpukan.data[tumpukan.top];
}
