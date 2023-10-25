/*
* progmer :talha rusman
*desc :  give discount 
*date:24/10/2023
*/
#include<stdio.h>
int discount(int a,int b){
	if(a >= 10&& b >= 50){
       b=b*0.75;
    return b;
	}else
	if(a >= 5 && a < 10 && b >= 30){
		b=b*0.90;
		return b;
	}else
	return b=1;
}

 int main()
{
	int t,ta;
	printf("how many time you vist the shop?");
	scanf("%d",&t);
	printf("how many amount you spands?");
	scanf("%d",&ta);
	int a = discount(t,ta);
	if(a==1){
		printf("no discount for you.");
	}else
    printf("after discount price is %d",a);
	return 0;
}