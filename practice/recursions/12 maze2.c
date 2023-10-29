//calsulat the number of ways in maze
#include<stdio.h>
int maze2(int r,int c){
	int downway=0;
	int rightway=0;
	if(r==1&&c==1){
		return 1;
	}
	if(r==1){//con't go down
		rightway += maze2(r,c-1);
	}
	if(c==1){
		downway += maze2(r-1,c);
	}
	if(r>1&&c>1){
			rightway += maze2(r,c-1);
			downway += maze2(r-1,c);
	}
	int totalways= downway+rightway;
	
	return totalways;
	
}

int main(){
	int n,m;
	printf("enter number of row in maze :");
	scanf("%d",&n);
	printf("enter number of colume in maze:");
	scanf("%d",&m);
	int nofways= maze2(n,m);
	printf("%d ",nofways);
	
	return 0;
}
