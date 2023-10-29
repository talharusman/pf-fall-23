#include<stdio.h>
int power(int a,int b){
	if(b==0) return 1;
	int x=a*power(a,b-1);
	return x;
}

int main(){
	int a,b;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	int p=power(a,b);
	printf("%d raised to the power %d is %d",a,b,p);
	
	return 0;
}
