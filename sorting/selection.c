#include <stdio.h>


int angka[10]={61,6,2,15,8,21,73,3,4,1};

void main(){
	
	for(int i=0; i<10; i++){
		
		int n=i;
		
		for(int j=i; j<10; j++){
			
			if(angka[j]<angka[n]){
				
				n=j;
			}
		}
		//swap 
		int temp=angka[i];
		angka[i]=angka[n];
		angka[n]=temp;
	}
	//print data
	for(int i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	
}
