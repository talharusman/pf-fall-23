#include <stdio.h>

int main() {
    int n, i,j;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n <= 1) {
       j = 0;
    } else {
        for (i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                j= 1;
                break;
            }
        }
    }

    if (j==1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

