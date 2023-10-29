#include <stdio.h>

int main(){
	int n,i,j;
	printf("enter any number:");
	scanf("%d",&n);
	
	if(n<=0){
		j=0;
	}
	else 
	  for(i=2;i<=n/2;i++){
	  	if(i%n==0){
	  		j=1;
	  		break;
		  }
	  }
	  if (j==1){
	  	printf("%d is a prime number.\n", n);
	  	
	  }
	  else
	  printf("%d is a prime notnumber.\n", n);
	return 0;
}
