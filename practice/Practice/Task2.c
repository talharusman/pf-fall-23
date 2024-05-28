#include<stdio.h>
#include<stdlib.h>

void dispal(int *ptr,int n){
     printf("enter the element of array:\n");
     for (int i = 0; i < n; i++)
     {
        scanf("%d",(ptr+i));
     }
     printf("the array is :\n");
    for (int i = 0; i < n; i++)
     {
         printf("%d ",*(ptr+i));
     }
     
    return;
}
int main(int argc, char const *argv[])
{
   int n;
   printf("enter the soze of array:\n");
   scanf("%d",&n);
   int *ptr= (int*) malloc(n*sizeof(int));
   dispal(ptr,n);

    return 0;
}
