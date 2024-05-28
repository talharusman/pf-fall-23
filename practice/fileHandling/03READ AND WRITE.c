#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("text.txt", "w"); // Use "w" instead of "W"

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);

    return 0;
}