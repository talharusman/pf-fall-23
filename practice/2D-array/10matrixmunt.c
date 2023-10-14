#include <stdio.h>

void matrixelement(int arr[][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element of row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void matrixmult(int res[][10], int fri[][10], int sec[][10], int r1, int c1, int r2, int c2) {
    int i, j, k;
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Number of columns in the 1st matrix must be equal to the number of rows in the 2nd matrix.\n");
        return;
    }
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++) {
                res[i][j] += fri[i][k] * sec[k][j];
            }
        }
    }
}

int main() {
    int r1, r2, c1, c2;
    int fri[10][10], sec[10][10], res[10][10];

    printf("Enter the number of rows of the 1st matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns of the 1st matrix: ");
    scanf("%d", &c1);
    matrixelement(fri, r1, c1);

    printf("Enter the number of rows of the 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns of the 2nd matrix: ");
    scanf("%d", &c2);
    if(c1 != r2){
         printf("this matrix is not muntiplay:");
	}
	else{
	
    matrixelement(sec, r2, c2);

    matrixmult(res, fri, sec, r1, c1, r2, c2);

    printf("Resulting matrix after multiplication:\n");
    int i,j;
    for ( i = 0; i < r1; i++) {
        for ( j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}
