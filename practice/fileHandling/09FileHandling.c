#include <stdio.h>

int main(int argc, char const *argv[]) {
    // FILE* ptr = fopen("talha.txt", "r");

    // if (ptr == NULL) {
    //     printf("Error opening the file.\n");
    //     return 1; // Or some other value to indicate failure
    // }

    // char str[100];
    // while (fgets(str, 100, ptr) != NULL) {
    //     printf("%s", str);
    // }

    // fclose(ptr); // Don't forget to close the file
    FILE* ptr = fopen("tr.txt","w");
    char str[]= "ha ye hi to karna the \nis liya ma yha aya ";
    fputs(str,ptr);
    fclose(ptr);

    return 0;
}
