/* programmer: talha rusman
* Date: 12/9/2023
* Related file:  file of qustion 2
*/
//--include file--//
#include<stdio.h>
#include<stdlib.h>
//--Global Variables--//
int main(){

	int n,i,j;
	printf("enter the n is gater then 0:");
	scanf("%d",&n);
	for( i=0; i<=n ; i++){
		for(  j=0 ; j<=n; j++){ 
        		printf("*");
      		}
		printf("\n");
	}
	return 0;
}//end main
