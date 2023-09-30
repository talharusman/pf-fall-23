/*
  enter any number:4
  1
  12
  123
  1234
*/
#include <stdio.h>

int main(){
	int i,j,a,n;
	printf("enter any number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
