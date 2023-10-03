#include<stdio.h>

int main(){
	int i,j,a,b[10];
	for (i=0;i<10;i++){
		printf("enter number%d:",i+1);
		scanf("%d",&b[i]);
	} 
	 for(i=9;i>=0;i--){
	 	printf("%d ",b[i]);
	 }
	return 0;
}
