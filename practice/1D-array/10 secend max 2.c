
#include <stdio.h>

int main(){
	int arr[10000];
    int n,i;
	int max=arr[0];
	int smax=arr[0];
		printf("how many input you give:");
	    scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		printf("enter number: ");
	    scanf("%d",&arr[i]);
	    if(max<arr[i]){
	    	smax=max;//privice max
	    	max=arr[i];// new max
		}
		else if(smax<arr[i]&&max!=arr[i]){
			smax=arr[i];
		}
	}

	printf("max is.%d\n",max);
	printf("secand max is.%d",smax);
	
	return 0;
}
