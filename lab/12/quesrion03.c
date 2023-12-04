#include <stdio.h>
#include <stdlib.h>

typedef struct course
{
    int courseCode;
    char courseName[50];
    int courseGpa;
    int semester[8];
    int creditHours;
} course;

int main()
{
    int n, cSum = 0;
    printf("Enter the number of courses: ");
    scanf("%d", &n);

    FILE *ptr = fopen("courses.txt", "w");
    if (ptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    course *arr = (course *)malloc(n * sizeof(course));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Course %d ID: ", i + 1);
        scanf("%d", &arr[i].courseCode);
        fprintf(ptr, "%d ", arr[i].courseCode);

        printf("Enter Course Name: ");
        scanf("%s", arr[i].courseName);
        fprintf(ptr, "%s ", arr[i].courseName);

        printf("Enter Course GPA: ");
        scanf("%d", &arr[i].courseGpa);
        fprintf(ptr, "%d ", arr[i].courseGpa);

        printf("Enter Semester: ");
        scanf("%d", &arr[i].semester);
        fprintf(ptr, "%d ", arr[i].semester);

        printf("Enter Credit Hours: ");
        scanf("%d", &arr[i].creditHours);
        fprintf(ptr, "%d", arr[i].creditHours);

        fprintf(ptr, "\n");
    }

    fclose(ptr);

    int a;
    printf("Enter:\n1- View Transcript\n2- Calculate CGPA\n3- Calculate SGPAS\nEnter: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            printf("Transcript of Student %d:\n", i + 1);
            printf("Course Id: %d\n", arr[i].courseCode);
            printf("Course Name: %s\n", arr[i].courseName);
            printf("Course GPA: %d\n", arr[i].courseGpa);
            printf("Semester: %d\n", arr[i].semester);
            printf("Credit Hours: %d\n", arr[i].creditHours);
        }
        break;
    case 2:
        for (int i = 0; i < n; i++)
        {
            cSum += arr[i].courseGpa;
        }
        // Calculate CGPA using cSum
        break;
    default:
        break;
    }

    // Don't forget to free the allocated memory
    free(arr);

    return 0;
}
