#include <stdio.h>
#include <math.h>

 int main(){
 	int n,a,d,i=a;
 	printf("enter last term:");
 	scanf("%d",&n);
 	
 	printf("enter frist term:");
 	scanf("%d",&a);
 	printf("enter common differnce:");
 	scanf("%d",&d);
 	for(i=a;a>= n;i++){
 		printf("%d\n",a);
 		a=a+d;
	 }//end for
return 0;
 }//end main
