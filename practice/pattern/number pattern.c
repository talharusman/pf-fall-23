/*
/*
   enter any number:2
  1 2
  1 2 
*/
#include <stdio.h>

int main(){
	int i,j,n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){//outer loop 
	for(j=1;j<=n;j++){//ineer loop 
		printf("%d ",j);
	}
	printf("\n");
	}

	
	
	return 0;
}
