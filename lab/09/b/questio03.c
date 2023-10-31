/*
*programmer:talha rusman
*Dase:find GCD using recrsion
*Date:31/10/23
*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: GCD(a, 0) = a
    } else {
        return gcd(b, a % b); 
    }
}

int main() {
    int num1, num2;
    
    printf("Enter numbers a: ");
    scanf("%d ", &num1);
    
    printf("enter number b: ");
    scanf("%d ", &num2);
    
    int result = gcd(num1, num2);//call the function
    
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}