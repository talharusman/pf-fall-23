#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("enter number of intes you wont:");
	scanf("%d",&n);
	//int arr[n];
    //      int* arr= new int[n];
	// for(int i=0;i<n;i++){
	// 	scanf("%d",&arr[i]);

	// }

	// for(int i=0; i<n;i++){
	// 	printf("%d\n",arr[i] );
	// }
	int *ptr=(int*) malloc(n*sizeof(int));
	int *p=ptr;//to stor the intial adderss of pointer 

	for(int i=0;i<n;i++){
		scanf("%d",&(*ptr)+i);
		//ptr;
	}
    for(int i=1;i<=n;i++){
	   printf("%d ",(*ptr));
	   ptr++;
	}


	return 0;
}