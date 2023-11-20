#include <stdio.h>

// Function to find the minimum of three numbers
int min(int a, int b, int c) {
    if (a < b) {
        return (a < c) ? a : c;
    } else {
        return (b < c) ? b : c;
    }
}

// Function to find the largest square submatrix of 1s
void Submatrix(int r, int c, int matrix[r][c]) {
    int maxSize = 0; 
    int endRow = 0;  
    int endCol = 0;   

    int dp[r][c];

    for (int i = 0; i < r; i++) {
        dp[i][0] = matrix[i][0];
    }
    for (int j = 0; j < c; j++) {
        dp[0][j] = matrix[0][j];
    }

    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
                if (dp[i][j] > maxSize) {
                    maxSize = dp[i][j];
                    endRow = i;
                    endCol = j;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // Display the largest square submatrix and its dimensions
    printf("Largest square submatrix of 1s:\n");
    for (int i = endRow - maxSize + 1; i <= endRow; i++) {
        for (int j = endCol - maxSize + 1; j <= endCol; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Dimensions: %dx%d\n", maxSize, maxSize);
}

int main() {
    int r, c;

    // Input the dimensions of the matrix
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &c);
    
    int matrix[r][c];
    printf("Enter the elements of the matrix (0 or 1):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find and display the largest square submatrix of 1s
    Submatrix(r, c, matrix);

    return 0;
}