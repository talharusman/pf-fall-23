/* programmer: talha rusman
* Date: 12/9/2023
* Related file:  Print the pattern for any number of n. Below is an example for n=4.
*
**
***
****
*/
//--include file--//
#include<stdio.h>
#include<stdlib.h>
//--Global Variables--//
int main(){
	int n;//input from user
	printf("enter  n is gater then 0");
	scanf("%d",&n);
	for(int i=0; i<=n ; i++){
		for( int j=0 ; j<i; j++){ 
        		printf("*");
      		}//end of j<i
		printf("\n");
	}//end of i<=n
	return 0;
}//end main
