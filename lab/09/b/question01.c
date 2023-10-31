#include<stdio.h>
int factorial(int n){
	if(n==0) return 1;
	int a;
	a=n*factorial(n-1);
	return a;
}

int main(){
	int n,ans;
	printf("enter number:");
	scanf("%d",&n);
	ans=factorial(n);
	printf("%d",ans);
	return 0;
}
