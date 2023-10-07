#include<stdio.h>
int factorial(x){
   int fact=1,i;
	for(i=1;i<=x;i++){
		fact =fact * i;
	}
return fact;
}//end fo combination
int main(){
     int ncr,n,r;
     printf("enter n");
     scanf("%d",&n);
     printf("enter r");
     scanf("%d",&r);
     ncr = factorial(n)/(factorial(r)*factorial(n-r));
     printf("%d",ncr);
	return 0;
}
