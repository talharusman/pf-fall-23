/* programmer: talha rusman
* Date: 12/9/2023
* Related file: this progran can Print the pattern for any number of n. Below is an example for n=4.
****
****
****
****
*/
//--include file--//
#include<stdio.h>
#include<stdlib.h>
//--Global Variables--//
int main(){

	int n;// how many * print in row and colume
	int i;// to print * horizently
	int j;//to print * verticaly
	printf("enter the n is gater then 0:");
	scanf("%d",&n);
	for( i=0; i<=n ; i++){
		for(  j=0 ; j<=n; j++){ 
        		printf("*");
      		}//end of j<=n
		printf("\n");
	}//end of i<=n
	return 0;
}//end main
