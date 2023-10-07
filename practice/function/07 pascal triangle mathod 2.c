#include<stdio.h>

int main(){
     int n,i,j,frist;
     printf("enter number of line:");
     scanf("%d",&n);
     n=n-1;
     for(i=0;i<=n;i++){
     	for(j=1;j<=n-i;j++){
     		printf(" ");
		 }
		 frist=1;
     	for(j=0;j<=i;j++){
     		if(j==i){
     			printf("1");
			 }else
     		printf("%d",frist);
     		frist=frist*((i-j)/(j+1));
     			printf(" ");
		 }
		 printf("\n");
	 }
    
	return 0;
}
