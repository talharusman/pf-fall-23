#include <stdio.h>

int main(){
	int i,n,a=1,b=1,sum=a+b;
	printf("enter any num: ");
	scanf("%d",&n);
	printf("%dth fibonacci serice is:%d ",n,a);
  for(i=0;i<=n-2;i++){
  	sum=a+b;
  	a=b;
  	b=sum;
  	
  	printf(" %d ",a);
  }
 printf("\nthe %dth fibonacci num is= %d ",n,a);
}
