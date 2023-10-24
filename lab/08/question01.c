/*
* progmer :talha rusman
*desc : swaps the value
*date:24/10/2023
*/
#include<stdio.h>
void swaps(int &a,int &b){
    int  temp =a;
      a= b;
      b = temp
}

int main(){
	int a,b;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	swaps(a,b);
	printf("a=%d and b=%d",a,b);
	return 0;
}
