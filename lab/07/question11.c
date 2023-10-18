/*
*programmer:talha rusman
*Dase:genrate maxlocal matrix
*Date:16/10/23
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number 0f row or colume of grid matrix:");
    scanf("%d", &n);
     if (n < 3) {
        printf("error! enter the number 0f row or colume grater then 3 .\n");
        return 1;
    }

    int grid[n][n];
    int i,j,k,l;
    printf(" elements of the grid matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    
    int Size=n-2;
    int maxLocal[Size][Size];
    for (i=0;i<Size; i++) {
        for (j=0;j<Size; j++) {
            maxLocal[i][j] = -1;
        }
    }

    for (i=0;i<Size; i++) {
        for (j=0;j<Size; j++) {
            for (k=0;k<3; k++) {
                for (l=0;l<3;l++) {
                    if (grid[i+k][j+l]>maxLocal[i][j]) {
                        maxLocal[i][j]=grid[i+k][j+l];
                    }
                }
            }
        }
    }

    printf("maxLocal matrix:\n");
    for ( i=0; i<Size; i++) {
        for (j=0;j<Size; j++) {
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }

    return 0;
}







