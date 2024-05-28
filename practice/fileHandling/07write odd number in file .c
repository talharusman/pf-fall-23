#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("witeodd.txt", "w"); // Use "W" for write mode


    int n;
    printf("enter any number:");
    scanf("%d",&n);

    for (int i = 1; i < n; ++i)
    {
        if (i%2!=0)
        {
            fprintf(fptr, "%d ", i);
        }
    }

   
    fclose(fptr);

    return 0;
}