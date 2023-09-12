/* programmer: talha rusman
* Date: 12/9/2023
* Related file: this file of qustion 1
*/
//--include file--//
#include<stdio.h>
#include<stdlib.h>
//--Global Variables--//
int main(){
	int n;
	printf("enter the integer n is gater then 0");
	scanf("%d",&n);
	for(int i=0; i<=n ; i++){
		for( int j=0 ; j<i; j++){ 
        		printf("*");
      		}
		printf("\n");
	}
	return 0;
}//end main
