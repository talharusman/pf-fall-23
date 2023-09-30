/*
  enter any number:5
  *
  **
  ***
  ****
  *****
*/
#include <stdio.h>

int main(){
	int i,j,n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){//outer loop 
	for(j=1;j<=i;j++){//ineer loop 
		printf("*");
	}
	printf("\n");
	}

	
	
	return 0;
}
