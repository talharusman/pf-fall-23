#include<stdio.h>

void input(int arr[][10], int r, int n) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element of row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
     for (i = 0; i < r; i++) {
        for (j = 0 ; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void rotate(int arr[][10], int r, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i; j < r; j++) {
           int temp = arr[j][i];
          arr[j][i]=arr[i][j];
          arr[i][j]=temp;
        }
        printf("\n");
    }
    int brr[10][10],a;
    for(i=0;i < r;i++){
    	a=0;
    	for(j=n-1;j>=0;j--){
    	 brr[i][a]=arr[i][j];
          a++;
		}
	}
    for(i = 0 ; i < r ; i++ ){
    	for( j = 0 ; j < n ; j++ ){
    		printf("%d ",brr[ i ][ j ]);
		}
		 printf("\n");
	}
}

int main() {
    int  n;
    
    printf("Enter the number of columns: ");
    scanf("%d", & n);

    int arr[10][10];
    
	printf("Enter elements of the matrix:\n");
    input(arr,  n , n );
    
    printf("Transpose matrix is:\n");
    rotate(arr , n ,  n);
    
    
    return 0;
}// end main
