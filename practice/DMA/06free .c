#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int x;
	int *ptr=&x;
	ptr=NULL;
	printf("%p\n",ptr );
	return 0;
}