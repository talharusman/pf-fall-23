#include<stdio.h>
typedef int* pointer;

int main(int argc, char const *argv[])
{
	int x=7,y=8;
	pointer a=&x,b=&y;

	printf("%p\n",a);

	printf("%p",b);
	return 0;
}