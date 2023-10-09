#include<stdio.h>

int main(){
	int i,j,n,arr[10000];
	printf("how many input you give?");
	scanf("%d",&j);
	for(i=0;i<=j-1;i++){
		printf("enter number %d\n",i+1);
	    scanf("%d",&n);
		if(i%2==0){
			n=n+10;
			arr[i]=n;
			
		}
		else 
		n=n*2;
		arr[i]=n;
	}
	for(i=0;i<=j-1;i++){
		printf("%d ",arr[i]);
	}
}
