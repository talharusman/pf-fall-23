#include <stdio.h>

int main(){
	int arr[10][2];
	int i,j,n;
	printf("enter the number of student: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			if(j%2==0){
				printf("enter the roll numberof student %d:",i+1);
			   // scanf("%d",&arr[i][j]);
			}else
		     printf("enter the mark ofstudent %d:",i+1);
		     scanf("%d",&arr[i][j]);   
		}
			printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr[i][j]);
		}
			printf("\n");
	}
}

