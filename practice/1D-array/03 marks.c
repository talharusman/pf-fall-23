#include <stdio.h>

int main(){
	  int i,n,marks[100005];
	  printf("enter the number of students");
	  scanf("%d",&n);
	 for (i=0;i<=n;i++){
	 	printf("enter marks of studenat %d\n",i+1);
	 	scanf("%d",&marks[i]);
	 }
	 for(i=0;i<=n;i++){
	 	if(marks[ i ] < 35)
	 	printf("roll number of student is->%d\n",i);
	 }
	 
	return 0;
}
