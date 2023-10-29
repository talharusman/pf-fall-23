#include<stdio.h>

int main(){
	int a,ff,lf;
      printf("enter 8 bit num:");
      scanf("%d",&a);
      ff=a&0b11110000;
      lf=a&0b00001111;
      printf("%d\n",a);
      a = (lf << 4) | (ff>>4);
       printf("%d\n",a);
       
return 0;
}
