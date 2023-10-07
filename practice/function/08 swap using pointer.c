#include<stdio.h>
void swap(int* x,int* y){
	int tamp;
	tamp=*x;
	*x=*y;
	*y=tamp;
	return;
}

int main(){
     int a,b;
     printf("enter number a:");
     scanf("%d",&a);
     printf("enter number b:");
     scanf("%d",&b);
    
     swap(&a,&b);
     printf("enter number a:%d\n",a);
     printf("enter number b:%d",b);
	return 0;
}
