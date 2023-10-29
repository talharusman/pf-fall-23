//to find the ways of path cover
#include <stdio.h>
 int stairs( int n){
 	if(n == 1|| n == 2||n == 3)return n;//base case
 
    int totalways=stairs(n-1)+stairs(n-2)+stairs(n-3);
 	return totalways;
 }


int main(){
	int n ;
	printf("enter number:");
	scanf("%d",&n);
    int way=	stairs(n);
    
   printf("%d",way);
	return 0;
}
