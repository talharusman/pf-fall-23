#include <stdio.h>
#include <stdbool.h>
int main(){
	int arr[10000];
	int i,j,n;
		printf("how many input you give:");
	    scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		printf("enter number %d:",i+1);
	    scanf("%d",&arr[i]);
	}
	for (i=0;i<=n;i++){
		bool a= false;
		for( j=i+1;j<=n;j++){
			if(arr[i]==arr[j]){
			     a=true;
		        }
		    }
		    if(a==false){
			    printf("%d is uniq number.\n",arr[i]);
			    break;
                }
	}
	
	
	return 0;
}
