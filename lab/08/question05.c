/*
* progmer :talha rusman
*desc : swaps the value
*date:24/10/2023
*/
#include<stdio.h>
int  evenodd(int a,int b){
    if( a%2==0&& b%2==0){
        return 1;
	}else
	if (a%2!=0&& b%2!=0){
		return 1;
	}else
	  return 0;
     
}

int main(){
	int a,b;
	printf("enter car number:");
	scanf("%d",&a);
	printf("enter number of day 1 to 7:");
	scanf("%d",&b);
	evenodd(a,b);
	int ans = evenodd(a,b);
	 printf("%d",ans);
	return 0;
}
