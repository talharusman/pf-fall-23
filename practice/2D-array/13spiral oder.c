#include <stdio.h>

int main() {
    int arr[10][10], i, j, c, r;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element of row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Spiral print
    int minr = 0;
    int maxr = r - 1;
    int minc = 0;
    int maxc = c - 1;
    int tne = r * c;
    int count = 0;

    while (count < tne) {
        // Print the top row
        for (i = minc; i <= maxc && count < tne; i++) {
            printf("%d ", arr[minr][i]);
            count++;
        }
        minr++;

        // Print the rightmost column
        for (i = minr; i <= maxr && count < tne; i++) {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;

        // Print the bottom row if necessary
        for (i = maxc; i >= minc && count < tne; i--) {
            printf("%d ", arr[maxr][i]);
            count++;
        }
        maxr--;

        // Print the leftmost column if necessary
        for (i = maxr; i >= minr && count < tne; i--) {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }
    
    return 0;
}








