/*
  * Progmer : Talha rusman
  roll no : 23k-0065
  */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *ptr1 = fopen("File.docx", "rb");
    FILE *ptr2 = fopen("File2.docx", "rb");

    fseek(ptr1, 0L, SEEK_END);
    int size1 = ftell(ptr1);
    rewind(ptr1);

    fseek(ptr2, 0L, SEEK_END);
    int size2 = ftell(ptr2);
    rewind(ptr2);

    char *arr1 = (char *)malloc(sizeof(char) * size1);
    char *arr2 = (char *)malloc(sizeof(char) * size2);
 
    fread(arr1, 1, size1, ptr1);
    fread(arr2, 1, size2, ptr2);
    printf("%s\n%s\n", arr1, arr2);

    if (strcmp(arr1, arr2) == 0)
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    }
    

    fclose(ptr1);
    fclose(ptr2);

    return 0;
} // end main()
