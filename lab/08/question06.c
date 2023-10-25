/*
* progmer :talha rusman
*desc :  calculate the sum, maximum, and  minimum values.
*date:24/10/2023
*/
#include<stdio.h>
void chack(int arr[1000],int n){
      int i,s=0;
      int max=-1000;
      int min=1000;
      for(i=0;i<n;i++){
      	s+=arr[i];
      	if(max<arr[i])
      	max=arr[i];
      	if(min>arr[i])
      	min=arr[i];
	  }
	  printf("sum is. %d\n max  is. %d\n min is. %d\n",s,max,min);
}

int main(){
	int i,n,arr[1000];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element  of array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	chack(arr,n);
	
	return 0;
}
