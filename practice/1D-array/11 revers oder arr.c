
#include <stdio.h>

int main(){
	int arr[10000];
	int brr[10000];
    int n,i,j;
	int max=arr[0];
	int smax=arr[0];
		printf("how many input you give:");
	    scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		printf("how many input you give:");
	    scanf("%d",&arr[i]);
	}j=0;
	for(i=n-1;i>=0;i--){
	   brr[j]=arr[i];
	   printf("%d ",brr[j]);
	   j++;
	}
	
	
	return 0;
}
