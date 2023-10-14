#include<stdio.h>

int main(){
	int arr[10][10],i,j,c,r;
	printf("Enter the number of rows of  matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of  matrix: ");
    scanf("%d", &c);
	
	printf("enter the element of matrix\n");
	 for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element of row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
      for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
        	
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
	printf("\n");
    //prnt in wave
     for (i = 0; i < r; i++) {
     	int a=r-1;
        for (j = 0; j < c; j++) {
        	if(i%2==0){
        		 printf("%d ",arr[a][i]);
        		  //a=a-1;
          }
		   else
            printf("%d ",arr[i][j]);
            a--;
        }
        printf("\n");
    }
	
	return 0;
}
