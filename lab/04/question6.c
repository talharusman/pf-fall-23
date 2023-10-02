/*
enter number of line:3
  *
 * *
*   *
 * *
  *
*/
#include<stdio.h>

int main(){
	int i,j,n,a,b,k;
	printf("enter number of line:");
	scanf("%d",&n);
	a=n-1;
	k=1;
	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=a;j++){
			printf(" ");
		}
	    if(i==1||i==2*n-1){
			printf("*");
		}
		else 
	    for(j=1;j<=2;j++){
			printf("*");
		    for(b=1;b<=k;b++){
		    	printf(" ");
			}if(i<n){
				k++;
			}else
			  k--;
		}if(i<n){
			a--;
		}else
		a++;
		
		printf("\n");
	}
	
	return 0;
}
