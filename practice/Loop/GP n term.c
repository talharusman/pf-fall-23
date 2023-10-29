#include <stdio.h>
#include <math.h>

 int main(){
 	int n,a,r,i=a;
 	
 	printf("ente number of term:");
 	scanf("%d",&n);
 	printf("enter frist term:");
 	scanf("%d",&a);
 	printf("enter common differnce:");
 	scanf("%d",&r);
 	for(i=a;i <= n;i++){
 		printf("%d\n",a);
 		a=a*r;
	 }//end for
return 0;
 }//end main
