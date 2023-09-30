/*
 enter any number:4
  A B C D
  A B C D
  A B C D
  A B C D
*/
#include <stdio.h>

int main(){
	int i,j,a,n;
	printf("enter any number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		a=1;
		for(j=1;j<=i;j++){
			if(i%2==0){
			int k=a+64;
			char d=(char)k;
			printf("%c ",d);
		}
		else
		printf("%d ",j);
			a++;
		}
		printf("\n");
	}
	return 0;
}
