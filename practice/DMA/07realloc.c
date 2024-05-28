#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr=(int*) malloc(10*4);
    printf("%p\n",ptr);//result is 006E0E70   
    ptr= realloc(ptr,2000*4);
    printf("%p",ptr);//result is 006837C0

    	return 0;
}