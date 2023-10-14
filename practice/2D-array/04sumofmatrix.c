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
		for(i = 0;i<r;i++){
	    	for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
		printf("\n");
	int sum=0;
		for(i=0;i<r;i++){
		     for(j=0;j<n;j++){
	     	sum += arr[i][j];
		}
	}
	printf("sum is %d",sum);
	return 0;
}
