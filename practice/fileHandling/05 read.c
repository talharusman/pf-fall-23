#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("newtext.txt", "r"); // Use "r" for read mode

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
   int n;
   fscanf(fptr,"%d",&n);
   printf("number ->%d",n);
   fscanf(fptr,"%d",&n);
   printf("number ->%d",n);
   fscanf(fptr,"%d",&n);
   printf("number ->%d",n);
   
    
    fclose(fptr);

    return 0;
}