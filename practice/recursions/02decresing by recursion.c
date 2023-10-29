#include<stdio.h>
void decresing(int n){
	printf("%d ",n);
	if(n==1)return;
	decresing( n-1);
	return;
}

int main(){
	int n ;
	printf("enter number:");
	scanf("%d",&n);
	decresing(n);
	
	return 0;
}
