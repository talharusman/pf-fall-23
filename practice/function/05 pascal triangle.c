#include<stdio.h>
int factorial(x){
   int fact=1,i;
	for(i=1;i<=x;i++){
		fact =fact * i;
	}
return fact;
}//end fo combination
int combination(n,r){
	return  factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
     int n,i,j;
     printf("enter number of line:");
     scanf("%d",&n);
     n=n-1;
     for(i=0;i<=n;i++){
     	for(j=1;j<=n-i;j++){
     		printf(" ");
		 }
     	for(j=0;j<=i;j++){
     		
     		int icj = combination(i,j);
     		printf("%d",icj);
     			printf(" ");
		 }
		 printf("\n");
	 }
    
	return 0;
}
