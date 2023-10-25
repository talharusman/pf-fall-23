/*
* progmer :talha rusman
*desc : bassic caluculater using function
*date:24/10/2023
*/
#include <stdio.h>

int addition(int a, int b) {
    int ans = a + b;
    return ans;
}

int subtraction(int a, int b) {
    int ans = a - b;
    return ans;
}

float division(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 0.0;    }
    float ans = (float)a / b; // Convert one operand to float for correct division
    printf("%f", ans);
    return ans;
}

int multiplication(int a, int b) {
    int ans = a * b;
    return ans;
}

int main() {
    int a, b;
    char op;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter the operator: ");
    scanf(" %c", &op); 
    printf("Enter number 2: ");
    scanf("%d", &b);
    float ans;

    switch (op) {
    case '+':
        ans = addition(a, b);
        break;
    case '-':
        ans = subtraction(a, b);
        break;
    case '/':
        ans = division(a, b);
        break;
    case '*':
        ans = multiplication(a, b);
        break;
    default:
        printf("Enter a valid operator: +, -, /, or *\n");
        return 1; 
    }
    printf("%.1f\n", ans);
    return 0;
}
int main(){
	int a,b;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	calculater(a,b);
	return 0;
}
