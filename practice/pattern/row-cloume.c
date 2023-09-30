/*
 enter  number colume :2
 enter number of row:3
 **
 **
 **
*/
#include <stdio.h>

int main(){
	int i,n,j;
	printf("enter  number colume :");
	scanf("%d",&j);
	printf("enter number of row:");
	scanf("%d",&n);
	for(i=0;i<n;i++){//outer loop sgnify number of line
	  int h;
	  for(h=0;h<j;h++){//ineer loop segnify number of stars"*"in each line
		printf("*");
		
	}
	printf("\n");
	
    }
	
   return 0;
}

