/*
  Programmer: Raghib Rizwan Rabani
  Roll No: 23K-0012
  Desc: Filing
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *ptr = fopen("CSV.csv", "r");

    if (ptr == NULL)
    {
        printf("File DIDNT OPEN!\n");
        return 0;
    }

    

    char temp[50];
    fgets(temp, 50, ptr);
    int row = 0, col = 0;
    char *token = strtok(temp, ",");
    while (token != NULL)
    {
        token = strtok(NULL, ",");
        col++;
    }
    rewind(ptr);
    while (!(feof(ptr)))
    {
        fgets(temp, 50, ptr);
        token = strtok(temp, ",");
        while (token != NULL)
        {
            printf("%9s|", token);
            token = strtok(NULL, ",");
        }
        row++;
    }
    printf("\nCol: %d, ", col);
    printf("Row: %d", row);

    
}
