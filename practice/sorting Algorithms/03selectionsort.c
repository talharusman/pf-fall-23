#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[]) {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; ++i) {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j < n; ++j) {  // Corrected the loop condition
            if (min > arr[j]) {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}