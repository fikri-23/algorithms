 #include <stdio.h>
 #define max 5

typedef struct {
    int top;
    int data[max+1];
}set;

set himpunan;
void createEmpty();
int IsEmpty();
int IsFull();
int tp();
void push(int x);
void pop();
void find();

int main(){
    int lagi;
    int input;
    int pilih;
    createEmpty();
    pilih = 0;
    while (pilih != 6){
        printf("             MENU UTAMA\n");
        printf("1: status himpunan\n");
        printf("2: insert\n");
        printf("3: erase\n");
        printf("4: clear\n");
        printf("5: nilai terakhir\n");
	printf("6: keluar\n");
        printf("Pilihan Anda:\n ");
        scanf("%d",&pilih);
        switch(pilih){
        case 1:
             find();
       break;
        case 2:
            if (IsFull() == 1)
                printf("himpunan Penuh.");
            else
            {
                printf("Masukkan data: ");
                scanf("%d",&input);
                push(input);
                printf("insert baru: %d\n",himpunan.data[himpunan.top]);
                printf("IsFull: %d\n",IsFull());
                printf("IsEmpty: %d\n",IsEmpty());
            }
        break;
        case 3:
            printf("nilai yang dihapus: %d \n",himpunan.data[himpunan.top]);
            pop();
        break;
        case 4:
            while (IsEmpty() == 0)
            {
                printf("nilai yang dikeluarkan : %d \n",himpunan.data[himpunan.top]);
                pop();
            }
            printf("himpunan sudah kosong");
        break;
        
	case 5:
	    printf(" nilai terakhir: %d\n" ,tp());
	break;
	case 6:
            printf("Terimakasih ");
        break;   
        }
    }
}

void createEmpty(){
    himpunan.top = 0;
}

void push(int x){
    himpunan.top = himpunan.top + 1;
    himpunan.data[himpunan.top] = x;
}

void pop(){
    himpunan.top = himpunan.top - 1;
}

int IsEmpty(){
    if (himpunan.top == 0)
        return 1;
    else
        return 0;
}

int IsFull(){
    if (himpunan.top == max)
        return 1;
    else
        return 0;
}
int tp(){
   return himpunan.data[himpunan.top];
}
void find(){
	if (IsEmpty() == 1)
                printf("status=0");
            else if ((IsEmpty() == 0) && (IsFull() == 0))
                printf("status=1");
            else
                printf("status = 1");

}
