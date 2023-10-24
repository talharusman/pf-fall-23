/*
* progmer :talha rusman
*desc : swaps the value
*date:24/10/2023
*/
#include<stdio.h>
void calculater(int a,int b){
      float ans;
      char op;
      printf("enter the operater:");
      scanf(" %c",&op);
      switch(op) {
      	 case '+': ans = a +b;
      	 break;
      	 case '-': ans = a - b;
      	 break;
      	 case '/': ans = a / b;
      	 break;
      	 case '*': ans = a * b;
      	 break;
      	 default: printf("enter the valid oprater:");
	  }
	  printf("ans is %.1f",ans);
}

int main(){
	int a,b;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	calculater(a,b);
	return 0;
}
