#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("sum.txt", "r"); // Use "r" for read mode


    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
      fclose(fptr);

    fptr = fopen("sum.txt", "w"); // Use "w" for write mode
    fprintf(fptr, "%d", a + b);
    fclose(fptr);

    return 0;
}