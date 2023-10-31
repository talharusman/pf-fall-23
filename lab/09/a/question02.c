#include <stdio.h>

void revers(int *arr){
         int i,j;
         int brr[5];
         for (i=0,j=4;i<5&&j>=0;j--,i++){
             brr[i]= arr[j];
		 }
		  for (i=0;i<5;i++){
             arr[i]= brr[i];
		 }
}

int main(){
	int arr[5]={1,2,3,4,5};
	int i;
	for (i = 0; i < 5;i++){
		printf("%d ",arr[i]);
	}
	revers(arr);
	printf("\n");
	for (i = 0; i < 5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
