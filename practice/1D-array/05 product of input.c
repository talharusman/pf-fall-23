#include <stdio.h>

int main(){
	  int i,n,arr[100005];
	  printf("how many input you give:");
	  scanf("%d",&n);
	  n=n-1;
	 for (i=0;i<=n;i++){
	 	printf("enter marks of studenat %d\n",i+1);
	 	scanf("%d",&arr[i]);
	 }
	 int a=1;
	 for(i=0;i<=n;i++){
	 a=a*arr[i];
	 
	 }
	 printf("sum is %d",a);
	return 0;
}
