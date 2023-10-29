#include<stdio.h>
void increasing(int n){

	if(n==0) return;
	increasing(n-1);
	printf("%d ",n);
	return;
}

int main(){
	int n,i=1;
	printf("enter number:");
	scanf("%d",&n);
	increasing (n);
	
	return 0;
}
