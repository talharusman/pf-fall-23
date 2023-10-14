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
		printf("\n");
	}
		for(i = 0;i<r;i++){
	    	for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
		printf("\n");
	int sum=0,maxsum,k,c;
		for(i=0;i<r;i++){
			sum=0;
		     for(j=0;j<n;j++){
	     	sum += arr[i][j];
	     	if(i==0)
	     	maxsum=sum;
	     	k=i+1;
	    
		}
	    if(maxsum<sum){
	    maxsum=sum;
	    	k=i=1;
		}
	    printf("sum of row%d is %d \n",i+1,sum);
	}
	printf("max sum is %d and ROW is %d\n",maxsum,k);
	return 0;
}
