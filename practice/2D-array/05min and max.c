#include<stdio.h>

int main(){
	int r,i,j;
	printf("enter number of row:");
	scanf("%d",&r);
	int n;
	printf("enter number of colume:");
	scanf("%d",&n);
	printf("enter elements of matrix\n:");
	int arr[r][j];
	for(i=0;i<r;i++){
		for(j=0;j<n;j++){
			printf("enter elements of rw%d,colum%d:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	
		for(i=0;i<r;i++){
	    	for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
		printf("\n");
	int a=0,b=1000,k,c;
		for(i=0;i<r;i++){
		     for(j=0;j<n;j++){
	     	if(a<arr[i][j]){
	     		a=arr[i][j];
	     		k=i;
	     		c=j;
			 }
		}
	}
	printf("max is %d and index is (%d,%d)\n",a,k,c);
	for(i=0;i<r;i++){
		     for(j=0;j<n;j++){
	     	if(b>arr[i][j]){
	     		b=arr[i][j];
	     		k=i;
	     		c=j;
			 }
		}
	}
	printf(" is %d and index is (%d,%d)\n",b,k,c);
}
