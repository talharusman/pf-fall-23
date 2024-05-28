#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("text.txt", "r"); // Use "r" for read mode

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;

    ch = fgetc(fptr);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    printf("\n");
    fclose(fptr);

    return 0;
}