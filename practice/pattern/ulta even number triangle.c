/*
 enter any number:3
 246
 24
 2
*/
#include <stdio.h>

int main(){
	int i,j,a,n;
	printf("enter any number:");
	scanf("%d",&n);
     
	for (i=1;i<=n;i++){
	    a=0;
		for(j=1;j<=i;j++){
			a=a+2;
			printf("%d ",a);
		}
	
		printf("\n");
	}
	return 0;
}
