/*
enter any number:3
123
12
1
*/
#include <stdio.h>

int main(){
	int i,j,a,n;
	printf("enter any number:");
	scanf("%d",&n);
	a=n;
	for (i=1;i<=n;i++){
		for(j=1;j<=2*a-1;j++){
			if(j%2!=0){
			printf("%d",j);
		   }
		}
		a--;
		printf("\n");
	}
	return 0;
}
