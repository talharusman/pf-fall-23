/*
 
*/
#include <stdio.h>

int main(){
	int i,j,a,n;
	printf("enter number of colme:");
	scanf("%d",&n);
	printf("enter number of row:");
		scanf("%d",&a);
	
	for (i=1;i<=a;i++){
		if(i==1||i==a){
		
		for(j=1;j<=n;j++){
			
			printf("* ");
		    }
		  
	   }else
	   for(j=1;j<=n*2;j++){
			if(j==1||j==n*2-1){
		
			printf("*");
		}else
		printf(" ");
			}
		   printf("\n");
	   
   }
	return 0;
}
