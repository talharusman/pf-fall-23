/*
*programmer:talha rusman
*Dase:print in accending ader
*Date:10/10/23
*/
#include <stdio.h>
void input(int arr[],int n){
	int i,j;
	for(i = 0; i < n;i++){
		printf("enter number %d",i+1);
	    scanf("%d",&arr[i]);
	}
    printf("intput numbers\n");
	for(i = 0; i < n;i++){
		printf("%d,",arr[i]);   
	}
}
void ascending( int arr[],int n){
	   int i,temp ,s;
	   do{
	   	s=0;
	   	for(i=0;i<n-1;i++){
	   		if(arr[i]>arr[i+1]){
	   		    temp= arr[i];
	   		    arr[i]=arr[i+1];
	   		    arr[i+1]=temp;
	   		    s=1;
			   }
		   }
	   }while(s);
      printf("\n");
	printf("output numbers\n");
	for(i = 0; i < n;i++){
		printf("%d,",arr[i]);   
	} 
}

int main(){
	int n,arr[1000];
	printf("how many input you give");
	scanf("%d",&n);
	input(arr,n);
	ascending(arr,n);
	return 0;
}
