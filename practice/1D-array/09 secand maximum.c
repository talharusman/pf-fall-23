
#include <stdio.h>

int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int i,j,x=12;
	int max=arr[0];
	int smax=arr[0];
	for (i=0;i<=7;i++){
	    if(max<arr[i]){
	    	max=arr[i];
		}
	}
	for (i=0;i<=7;i++){
	    if(arr[i]!=max&&smax<arr[i]){
	    	smax=arr[i];
		}
	}
	printf("max is.%d\n",max);
	printf("secand max is.%d",smax);
	
	return 0;
}
