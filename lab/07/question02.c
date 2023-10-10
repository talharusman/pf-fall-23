#include <stdio.h>


void revers(int arr[],int si,int ei){
	int i;
	int j;
    for(i=si,j=ei;i<=j;i++,j--){
	     int tamp=arr[i];
	     arr[i]=arr[j];
	      arr[j]=tamp;
	}
	return;
}
int main(){
	int arr[10000];
	int brr[10000];
    int n,i,j,k;
		printf("how many input you give:");
	    scanf("%d",&n);
	    printf("how nmany time you rotate the array:");
	    scanf("%d",&k);
	    
	for (i=0;i<=n-1;i++){
		printf("enter number %d:",i+1);
	    scanf("%d",&arr[i]);
	}
		revers(arr,0,n-1);
		revers(arr,0,k-1);
		revers(arr,k,n-1);
	for (i=0;i<=n-1;i++){
	
	printf("%d ",arr[i]);
}
	return 0;
}