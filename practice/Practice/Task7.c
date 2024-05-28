#include <stdio.h>

void patternPrint(int arr[][20], int n) {
    int minr = 0, minc = 0;
    int maxc = n , maxr = n ;
    int a = n;
    int c = 0;
     int b=1;
    while (b!=2) {
         printf("_\n");
        c = minc;
         for (int i = 1; c <= maxc ; i++) {
            arr[minr][c] = a;
            c++;
        }
        minr++;
        printf("_\n");
        
        c = minr;
        for (int i = 1; c <= maxr; i++) {
            arr[c][maxc] = a;
            c++;
        }
        maxc--;
         printf("_\n");

        c = maxc;
        for (int i = 1; c >= minc; i++) {
            arr[maxr][c] = a;
            c--;
        }
        maxr--;
         printf("_\n");

        c = maxr;
        for (int i = 1; c >= minr || a >= 1; i++) {
            arr[c][minc] = a;
            c--;
        }
        minc++;
        a--;
         printf("_\n");
     b++;
    }
    printf("complete process\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[20][20] = {0}; // Initialize the array with zeros

    patternPrint(arr, n);

    return 0;
}
