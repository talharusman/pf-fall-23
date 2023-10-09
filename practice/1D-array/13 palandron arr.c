#include <stdio.h>

int main(){
	int arr[10000];
    int n,i,c=0,j;
		printf("how many input you give:");
	    scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		printf("how many input you give:");
	    scanf("%d",&arr[i]);
	} j=n-1;
	for(i=0;i<=n-1;i++){
	    if(arr[i]==arr[j]){
	    	j--;
	    	
	}else
	break;
	}
	    if(i==n){
	    		printf("serice is palandrom");
			}
			else
              printf("serice is not palandrom");
	return 0;
}
