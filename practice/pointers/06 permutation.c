#include<stdio.h>
int factorial(x){
   int fact=1,i;
	for(i=1;i<=x;i++){
		fact =fact * i;
	}
return fact;
}//end fo factorial
int permutation(n,r){
	return  factorial(n)/(factorial(n-r));
}
int main(){
     int npr,n,r;
     printf("enter n:");
     scanf("%d",&n);
     printf("enter r:");
     scanf("%d",&r);
     npr = permutation(n,r);
     printf("%d",npr);
	return 0;
}
