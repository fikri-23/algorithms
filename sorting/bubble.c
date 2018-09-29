#include <stdio.h>

int angka[]={61,6,2,15,8,21,73,3,4,1};

//fungsi bubble
void bubble(){
	
	for(int i=0; i<10-1; i++){
		for(int j=0; j<10-1; j++){
			//condition
			if(angka[j+1]<angka[j]){
				//swap data
				int temp=angka[j];
				
				angka[j]=angka[j+1];
				
				angka[j+1]=temp;
			}
		}
	}
}


int main(){
	
	bubble();
	printf("diurutkan : \n");
	for(int i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	
	
}
