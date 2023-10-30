/*
* progmer : talha rusman
*Dase: find the pair whose sum equal to given number 't'.
*Date:26/10/2023 
*/
#include<stdio.h>
#include<stdbool.h>

int main(){
	int arr[10000];
	int t,n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the list:");
    for ( i = 0 ; i < n; i++){
    	scanf("%d",&arr[i]);
    }
    printf("enter t:");
    scanf("%d",&t);
    printf("pairs:");
    bool flag=true;
    for(i = 0;i < n; i++){
    	int j;
    	for( j = i +1;j < n; j++){
    		if(arr[i]+arr[j]==t){
               printf("(%d,%d),",arr[i],arr[j]);
               arr[j]=t+1;
               flag=false;
    		}
    	}
    }
    if (flag){
    	printf("there is no any pairs sum = %d ",t);
    }
}