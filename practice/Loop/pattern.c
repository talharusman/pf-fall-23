/*
   enter any number:3
   ***
   ***
*/
#include <stdio.h>


int main(){
	int i,j,n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){//outer loop sgnify number of line
	for(j=0;j<n;j++){//ineer loop segnify number of stars"*"in each line
		printf("*");
	}
	printf("\n");
	}

	
	
	return 0;
}
