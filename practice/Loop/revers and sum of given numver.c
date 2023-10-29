#include<stdio.h>

int main(){
	int n;
	printf("enter any num:");
	scanf("%d",&n);
	int i=0;
	int r,c=0;
	for(i=0;n>0;i++){
	 r=n%10;
		n=n/10;

	    c=c+r;
			printf("%d",r);
	}// end for
		printf("\nsum is %d",c);
	return 0;
}
