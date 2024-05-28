#include<stdio.h>


int factorial(int n){
    if(n==1||n==0){
        return 1;
    }

    return factorial(n-1)*factorial(n-2);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter number you want to find factorial:");
    scanf("%d",n);
   int a =factorial(n);
    
    printf("factoiral is%d",a);
    return 0;
}
