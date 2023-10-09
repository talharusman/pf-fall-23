#include <stdio.h>

void revers(int arr[],int a){
	int i;
	int j;
    for(i=0,j=a;i<=j;i++,j--){
	     int tamp=arr[i];
	     arr[i]=arr[j];
	      arr[j]=tamp;
	}
	return;
}
int main(){
	int arr[10000];
	int brr[10000];
    int n,i,j;
		printf("how many input you give:");
	    scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		printf("how many input you give:");
	    scanf("%d",&arr[i]);
	}
	revers(arr,n-1);
	for (i=0;i<=n-1;i++){
	
	printf("%d ",arr[i]);
}
	return 0;
}
