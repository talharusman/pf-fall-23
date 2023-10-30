/*
* progmer : talha rusman
*Dase: find Ramanujan number
*Date:26/10/2023 
*/
#include <stdio.h>

void findRamanujan(int n) {
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            for (int c = a; c <= n; c++) {
                for (int d = c + 1; d <= n; d++) {
                    int sum1 = a * a * a + b * b * b;
                    int sum2 = c * c * c + d * d * d;
                    if (sum1 == sum2) {
                        printf("Ramanujan-Hardy number: %d (%d^3 + %d^3 = %d^3 + %d^3)\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the maximum value for n: ");
    scanf("%d", &n);

    findRamanujan(n);

    return 0;
}