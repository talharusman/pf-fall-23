#include<stdio.h>
void increasing(int n,int i){

	if(i>n) return;
	printf("%d ",i);
	increasing(n,i+1);
	return;
}

int main(){
	int n,i=1;
	printf("enter number:");
	scanf("%d",&n);
	increasing (n,i);
	
	return 0;
}
