#include<stdio.h>
int muntiply(int a,int b,int ans){
	if(b==0) return ans;
     //	ans+=a;
	muntiply(a,b-1,ans+a);
  // ans+=a;
	return ;
}

int mul(int a, int b){
	if (b==1) return a;
	else return a + mul(a,b-1);
}

int main(){
	int a,b,ans;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	printf("%d",mul(a,b));
	return 0;
}
