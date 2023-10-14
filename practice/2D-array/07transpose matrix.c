#include <stdio.h>

void input(int arr[][10], int r, int n) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element of row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
     for (i = 0; i < n; i++) {
        for (j = 0 ; j < r; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void transpose(int arr[][10], int r, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int r, n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[10][10];
    printf("Enter elements of the matrix:\n");
    input(arr, r, n);
    
    printf("Transpose matrix is:\n");
    transpose(arr, r, n);
    
    return 0;
}
