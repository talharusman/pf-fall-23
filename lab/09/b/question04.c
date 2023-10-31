//muntipl recrsion coll
#include <stdio.h>
 int fibo( int n){
 	if(n==1||n==2)
	 { 
	 printf("1 ");
	 return 1;//base case
    }
 	return fibo(n-1)+fibo(n-2);
 	printf("%d ",fibo(n-1));
 }


int main(){
	int n ;
	printf("enter number:");
	scanf("%d",&n);
    int x=	fibo(n);
    
   printf("%d",x);
	return 0;
}
