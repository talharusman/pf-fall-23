#include <stdio.h>
int min(int a, int b){
	if(a<b){
	return a;}
	else
	 return b;
}
int gcd(int a,int b){
	int i,hcf;
	for(i=1;i<=min(a,b);i++){
		if(a%i==0&&b%i==0);
		hcf=i;
	}
	return hcf;
}
 int main(){
 	int a;
 	printf("enter number a:");
 	scanf("%d",&a);
 	int b;
 	printf("enter number b:");
 	scanf("%d",&b);
 	int hcf=gcd(a,b);
 	printf("hcf/gcd of %d and %d is.%d",a,b,hcf);
 	return 0;
 }
