#include <stdio.h>

char q[5];
int value[5];
int n;
 int i;

void delete();

void find();




int main(){
int pilih;
    pilih = 0;
    while (pilih != 4){
        printf("             MENU UTAMA\n");
        printf("1: find\n");
        printf("2: insert\n");
        printf("3: delete\n");
	printf("4: keluar\n");
        printf("Pilihan Anda:\n ");
        scanf("%d",&pilih);
        switch(pilih){
        case 1:
          find();
        break;
        case 2:
           
           printf("Data Larik Dari Depann");
            //Menggunakan Looping
            for(i=0;i<6;i++){
            scanf("%d\n",value[i]);}
             for(i=0;i<6;i++){
              scanf("%c\n",q[i]);}
      
        printf("Data ke-%d =  %dn",i+1,value[i]);
        printf("Data ke-%d =  %cn",i+1,q[i]);
    
        break;
        case 3:
            delete();
        break;

	case 4:
            printf("Terimakasih ");
        break;   
        }
    }
}






void find(){
int z;
printf("masukan nilai yand dibutuhkan (value)");
scanf("%d",&z);
if (z=value[n]){
     printf("nilai q = %c",q[n]);
     printf("nilai value %d",value[n]);}
else 
    printf("tidak ada");
}
void delete(){
int m;
printf("masukan array ke ? yang akan dihapus");
scanf("%d",&m);
q[m]= 0;
value[m] =0;
}

