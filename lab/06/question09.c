/*
 * programer:talha rusman,23k-0065
 *Desc:min and max from n numbers
 *Date:3/10/2023
*/
#include<stdio.h>

int main(){
	int i,n,b;
	
	printf(" how many input you give?");
	scanf("%d",&n);
	printf("enter numbers:");
	int max=0,min=20000;
    for (i=0;i<=n;i++){
	 	printf("enter numbers %d\n",i+1);
	 	scanf("%d",&arr[i]);
	 }
	for(i=0;i<=n;i++){
	    if(max<arr[i]){
	 	max=arr[i];
	    }
	    if(min>arr[i]){
	 	min=arr[i];
	    }
	}

	printf("Max=%d\nMin=%d\n",max,min);
	return 0;
}

