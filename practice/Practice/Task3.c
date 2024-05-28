#include<stdio.h>

void swap(int *ptr1,int *ptr2){
    *ptr1=*ptr1^*ptr2;
    *ptr2=*ptr1^*ptr2;
    *ptr1=*ptr1^*ptr2;  
    return;
}
int main(int argc, char const *argv[]){
    int a = 5,b = 3;
    printf("before sowap:\n");
    printf("a=%d \nb=%d \n",a,b);
    swap(&a,&b);
    printf("after sawap:\n");
    printf("a=%d \nb=%d \n",a,b);
    return 0;
}
