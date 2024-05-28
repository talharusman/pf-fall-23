/*
*programmer:talha rusman
*Dase:using pointer print the value of array
*Date:31/10/23
*/
#include <stdio.h>

int main() {
    int arr1[1000];
    char arr2[1000];
    long long int arr3[1000];
    int n;
    int i;
    printf("enter the size of array: ");
    scanf("%d", &n);

    printf("enter int type array's elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter char type array's elements:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr2[i]); // Notice the space before %c to consume the newline character.

    }

    printf("enter long long int type array's elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%lld", &arr3[i]);
    }

    int *pnt1 = &arr1[0];
    char *pnt2 = &arr2[0];
    long long int *pnt3 = &arr3[0];

    printf("for int type array's:\n");
    for (int i = 0; i < n; i++) {
        printf("Value of arr1[%d] is %d, Address is %p\n", i, *pnt1, (void *) pnt1);
        pnt1++;
    }

    printf("for char type array's:\n");
    for (int i = 0; i < n; i++) {
        printf("Value of arr2[%d] is %c, Address is %p\n", i, *pnt2, pnt2 + i);
        pnt2++;
    }

    printf("for long long int type array's:\n");
    for (int i = 0; i < n; i++) {
        printf("Value of arr3[%d] is %lld, Address is %p\n", i, *pnt3, pnt3 + i);
        pnt3++;
    }

    return 0;
}