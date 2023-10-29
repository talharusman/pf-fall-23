#include <stdio.h>
 int sum( int n){
 	if(n==1||n==0)return 1;//base case
 	return n+sum(n-1);
 }


int main(){
	int n ;
	printf("enter number:");
	scanf("%d",&n);
    int s=	sum(n);
    
    printf("%d",s);
	return 0;
}
