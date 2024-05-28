#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n;
	// printf("enter array size:");
	// scanf("%d",&n);
	// //int arr[n];
    //      int* arr= new int[n];
	// for(int i=0;i<n;i++){
	// 	scanf("%d",&arr[i]);

	// }

	// for(int i=0; i<n;i++){
	// 	printf("%d\n",arr[i] );
	// }
	// int *ptr= (int*) malloc(10*sizeof(int));
	//  ptr++;
	//  printf("%d\n",*ptr);
	//  printf("ptr->%p\n",ptr);
	//  ptr++;
	//  printf("%d\n",*ptr);
	//  printf("ptr->%p\n",ptr);

	//  ptr++;
	//  printf("%d\n",*ptr);
	//  printf("ptr->%p\n",ptr);

	 printf("\ncalloc");
	 int *ptr= (int*) calloc(10,sizeof(int));
	  ptr++;
	 printf("%d\n",*ptr);
	 printf("ptr->%p\n",ptr);
	 ptr++;
	 printf("%d\n",*ptr);
	 printf("ptr->%p\n",ptr);

	 ptr++;
	 printf("%d\n",*ptr);
	 printf("ptr->%p\n",ptr);

	return 0;
}