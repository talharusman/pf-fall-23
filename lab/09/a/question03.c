#include <stdio.h>
void swap(int *k,int){

}

int main(){
	int arr1[1000];
	char arr2[1000];
	long long int arr3[1000];
	int n;
	int i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter int type array's element\n");
	for (i = 0; i < n;i++){
	    scanf("%d"&arr1[i]);
	}
	printf("enter char type array's element\n");
	for (i = 0; i < n;i++){
	    scanf("%s"&arr2[i]);
	}	
	printf("enter long long int type array's element");
	for (i = 0; i < n;i++){
	    scanf("%lli"&arr3[i]);
	}
	int *a=arr1[0];
	int *b=arr2[0];
	int *c=arr3[0];
	printf("");

	return 0;
}
