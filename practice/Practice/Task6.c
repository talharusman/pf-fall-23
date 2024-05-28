#include <stdio.h>
#include <stdlib.h>
// using dinamic alloction and other thing in this

void display(int **ptr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Get the number of columns
    printf("Enter the noumber of col");
    scanf("%d", &cols);

    // Read the matrix until -1 is entered
    int **matrix = NULL;
    int input;
    int row_count = 0;

    while (1) {
        scanf("%d", &input);

        if (input == -1) {
            break;
        }

        if (row_count == 0) {
            matrix = (int **)malloc(sizeof(int *));
        } else {
            matrix = (int **)realloc(matrix, (row_count + 1) * sizeof(int *));
        }

        matrix[row_count] = (int *)malloc(cols * sizeof(int));

        for (int j = 0; j < cols; j++) {
            matrix[row_count][j] = input;
            scanf("%d", &input);
        }

        row_count++;
    }

    // Calculate dimensions of the resultant matrix
    int result_rows = row_count - 2;
    int result_cols = cols - 2;

    // Allocate memory for the resultant matrix
    int **result = (int **)malloc(result_rows * sizeof(int *));
    for (int i = 0; i < result_rows; i++) {
        result[i] = (int *)malloc(result_cols * sizeof(int));
    }

    // Populate the resultant matrix
    for (int i = 0; i < result_rows; i++) {
        for (int j = 0; j < result_cols; j++) {
            result[i][j] = matrix[i + 1][j + 1] + matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] +
                           matrix[i + 1][j] + matrix[i + 1][j + 2] +
                           matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
        }
    }

    // Display the resultant matrix
    printf("Resultant matrix dimension = %dx%d\n", result_rows, result_cols);
    display(result, result_rows, result_cols);

    // Free allocated memory
    for (int i = 0; i < row_count; i++) {
        free(matrix[i]);
    }
    free(matrix);

    for (int i = 0; i < result_rows; i++) {
        free(result[i]);
    }
    free(result);
    return 0;
}