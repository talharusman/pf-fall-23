#include<stdio.h>

 int main(int argc, char const *argv[])
{
	int num= 5;
	int *ptr=&num;
	int **d_ptr=&ptr;

	printf("num=%d\t\t\t&n=%d\n",num,&num );
	printf("ptr= %d\t\t&ptr=%d \t\t*ptr=%d\n",ptr,&ptr,*ptr );
	printf("d_ptr= %d\t\t&d_ptr= %d\t\t*d_ptr=%d\t**d_ptr=%d\n",d_ptr,&d_ptr,*d_ptr,**d_ptr );
	return 0;
}