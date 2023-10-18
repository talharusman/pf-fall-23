/*
*programmer:talha rusman
*Dase:mubile company
*Date:10/10/23
*/
#include<stdio.h>

int main(){
	int tc=0,n=0,maxb=0,maxm=0;
	int arr[100][200],brr[1000];;
	int i,j,y,x,b,m;
	
	printf("enter the number of branch in company:");
	scanf("%d",&x);
	printf("\n");
		
	for ( i = 0; i < x ; i++){
		brr[i]=0;
	    printf("number of mubile in company %d:",i+1);
	    scanf("%d",&y);
	    printf("\n");
		printf("price of mobiles of branch %d\n",i+1);
	
		for ( j = 0; j < y;j++){
			printf("price of mubile %d",j + 1);
			scanf("%d",&arr[i][j]);
			 brr[i]+= arr[i][j];
			  if(maxm < arr[i][j]){
				maxm=arr[i][j];
				b=i+1;
				m=j+1;
			   }
		}
		printf("\n");
	}
	
	for ( i = 0; i < x; i++){
		tc +=brr[i];
		printf("total bill of branch (%d)is %d\n",i + 1, brr[i]);
		if(maxb < brr[i]){
			maxb=brr[i];
			n=i+1;
		}
	}
	printf("max mubile price is %d of branch %d,mubile %d\n",maxm,b,m);
	printf("max bill is %d of branch %d\n",maxb,n);
	printf("total bill of compony is %d",tc);
	return 0;
}
