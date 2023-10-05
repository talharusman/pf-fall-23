/*
 * programer:talha rusman,23k-0065
 *Desc:min and max from n numbers
 *Date:3/10/2023
*/
#include<stdio.h>

int main(){
	int i,n,b;
	
	printf("enter how many input you give?");
	scanf("%d",&n);
	printf("enter numbers:");
	int max=0,min=0;
	scanf("%d",&b);
	max=b,min=b;
	n--;
	for(i=1;n>=1;i++){
		n=n-1;
		scanf("%d",&b);
		if(b<min){
			min=b;
		}
		if (b>max){
			max=b;
		}
	}//end of for loop
	printf("Max=%d\nMin=%d\n",max,min);
	return 0;
}//end to main
