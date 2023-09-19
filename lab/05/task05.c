#include <stdio.h>

int main() {
    char n;

    printf("Enter any character or number: ");
    scanf("%c", &n);

    if (n >= '0' && n <= '9') {
        printf("Character is a digit.");
    } else 
	  if (n >= 'A' && n <= 'Z') {
        printf("Character is a capital alphabet.");
    } else  
	  if (n >= 'a' && n <= 'z') {
        printf("Character is a small alphabet.");
    } else 
	  if ((n >= ' ' && n <= '/') || (n >= ':' && n <= '@') || (n >= '[' && n <= '~')) {
        printf("Special character.");
    }
	 else {
        printf("Unknown character type.");
    }

    return 0;
}//end main
