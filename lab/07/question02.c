/*
*programmer:talha rusman
*Dase:rotae the array left by d positions.
*Date:10/10/23
*/
#include<stdio.h>

int main(){
	int i,temp,j,n,k,arr[1000];
	printf("enter the number of input you give:");
	scanf("%d",&n);
	
	for (i=0;i < n; i++){
		printf(" input %d=>",i+1);
		scanf("%d",&arr[i]);
	}
	printf("orignal array.\n");
    for (i=0;i < n; i++){
	printf("%d ",arr[i]);
	}
	printf("\nhow many time you rotat the array:");
	scanf("%d",&k);
	for(i=0;i < k;i++){
		temp=arr[0];
		for ( j = 0; j < n-1; j++){
				arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	 for (i=0;i < n; i++){
	printf("%d ",arr[i]);
	}
	return 0;
}
