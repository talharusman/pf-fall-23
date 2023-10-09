
#include <stdio.h>
#include <stdbool.h>
int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int i,j,x=12;
	int totalpair=0;
	for (i=0;i<=7;i++){
		for( j=i+1;j<=7;j++){
		   if(arr[i]==arr[j]){
		   totalpair++;
	       }
		}
	
	}
	printf("%d pairs",totalpair);
	
	return 0;
}
