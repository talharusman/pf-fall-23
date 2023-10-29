#include <stdio.h>
#include <math.h>

 int main(){
 	int n,a,i=a;
	 	float r;

 	printf("enter last term:");
 	scanf("%d",&n);
 	
 	printf("enter frist term:");
 	scanf("%d",&a);
 	printf("enter common ratio:");
 	scanf("%f",&r);
 	for(i=a;i>= n;i=a*r){
 		printf("%d\n",i);
 		a=a*r;

	 }//end for
return 0;
 }//end main
