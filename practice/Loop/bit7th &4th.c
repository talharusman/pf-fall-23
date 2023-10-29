#include <stdio.h>

int main() {
    char n;

    // Prompt the user to enter an 8-bit number
    printf("Enter an 8-bit number: ");
    scanf("%c", &n);

    // Check if the 4th and 7th bits are on (1)
    if ((n & (1 << 3)) && (n & (1 << 6))) {
    
        n = ~(1 << 3); 
        n = ~(1 << 6); 

        printf("The 4th and 7th bits were turned off.\n");
    } else {
        printf("The 4th and/or 7th bits were not both on.\n");
    }

    // Display the modified number
    printf("chang the number: %c\n", n);

    return 1;
}






