#include <stdio.h>

int main(){
	int i,n,a=1,b=1,sum=a+b;
	printf("enter any num: ");
	scanf("%d",&n);
	printf(" nth fibonacci serice is:%d ",a);
  for(i=2;i<=n;i++){
  	sum=a+b;
  	a=b;
  	b=sum;
  	
  	printf(" %d ",a);
  }
 
}
