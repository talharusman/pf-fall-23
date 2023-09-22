#include<stdio.h>

 int main(){
 	int n;
 	printf("enter light intancity:");
 	scanf("%d",&n);
 	if(n>1000){
 		printf("enter valid input.");
	 }//end of if(n>1000)
	 else if(n>0&&n<=100){
 		printf("low britness");
		 }
 		else if(n>100&&n<=500){
 			printf(" medium britness");
 			}else if(n>500){
 				printf("high britness.");
			 }
}
    
 
