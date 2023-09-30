/*
  enter any number:3
  ***
  **
  *
*/
#include <stdio.h>

int main(){
	int i,j,n,h;
	printf("enter any number:");
	scanf("%d",&n);
	 h=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=h;j++){
			printf("*");
		}
		h--;
		printf("\n");
	}
	
	return 0;
}
