#include <stdio.h>
#include <stdbool.h>

int main(){
	int arr[10000];
	int brr[10000];
    int n,i,j,k;
		printf("how many input you give:");
	    scanf("%d",&n);
	    printf("how nmany time you rotate the array:");
	    scanf("%d",&k);
	    bool a=false;//mean not present
	for (i=0;i<=n-1;i++){
		printf("enter number %D:",i+1);
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
	    if(arr[i]==k){
	        a= true;//mean is present
	    	break;
		}
	}
	if(a==true){
		printf(" %d is present in arr at intdex %d",k,i);
	}
	else 
	printf(" %d is not present in arry",k);
	return 0;
}
