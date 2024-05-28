#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("student.txt", "w"); // Use "W" for write mode

    // if (fptr == NULL)
    // {
    //     printf("Error opening file.\n");
    //     return 1;
    // }
    char name[100];
    int age;
    float cgpa;

    printf("enter the name of student:\n");
    scanf("%s",name);
    printf("enter the age of student\n");
    scanf("%d",&age);
    printf("enter the cgpa of student\n");
    scanf("%f",&cgpa);

    fprintf(fptr,"student name: %s\n",name );
    fprintf(fptr, "student age: %d\n",age );
    fprintf(fptr, "student cgpa: %.2f\n",cgpa );


   
    
    fclose(fptr);

    return 0;
}