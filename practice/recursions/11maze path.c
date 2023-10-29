//calsulat the number of ways in maze
#include<stdio.h>
int maze(int cr,int cc,int ec,int er){
		int rightway=0;
		int downway =0;
	if(cr==er && cc==ec) return 1;
	if(cr==er){//only rightway call
		rightway += maze(cr,cc+1,ec,er);
	}
	if(cc==ec){//only downword call
		 downway += maze(cr+1,cc,ec,er);
	}
	if(cr<er&&cc<ec){
		rightway += maze(cr,cc+1,ec,er);
		downway += maze(cr+1,cc,ec,er);
	}
	int totalways=rightway+downway;
	return totalways;
}

int main(){
	int n,m;
	printf("enter number of row in maze :");
	scanf("%d",&n);
	printf("enter number of colume in maze:");
	scanf("%d",&m);
	int nofways= maze(1,1,n,m);
	printf("%d ",nofways);
	
	return 0;
}
