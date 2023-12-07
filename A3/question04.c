#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[50];
    int salary;
} record;

void combineData(FILE *personalptr, FILE *departmentptr, FILE *combinedptr)
{
    record personal[200];
    record department[200];
    record combine[200];
    int percount = 0, depcount = 0, comcount = 0;

    // read file from personal file
    while (fscanf(personalptr, "%d %s", &personal[percount].id, personal[percount].name) == 2)
    {
        percount++;
    }

    // read data from department file
    while (fscanf(departmentptr, "%d %d", &department[depcount].id, &department[depcount].salary) == 2)
    {
        depcount++;
    }

    int id;
    int k = 1;

    while (k == 1)
    {    
        printf("Enter id: ");
        scanf("%d", &id);
        for (int i = 0; i < percount; ++i)
        {
            for (int j = 0; j < depcount; ++j)
            {
                if (personal[i].id == id && department[j].id == id)
                {
                    combine[comcount].id = personal[i].id;
                    strcpy(combine[comcount].name, personal[i].name);
                    combine[comcount].salary = department[j].salary;
                    comcount++;
                    k = -1;
                    break;
                }
            }
        }
        if (k == 1)
        {
            printf("You entered the wrong id; this id does not exist in the file.\n1again ");
        }
    }

    fprintf(combinedptr, "ID Name Salary\n");
    for (int i = 0; i < comcount; ++i)
    {
        fprintf(combinedptr, "%d %s %d\n", combine[i].id, combine[i].name, combine[i].salary);
    }

    return;
}

int main(int argc, char const *argv[])
{
    FILE *personalptr = fopen("personal.txt", "r");        // file of personal data
    FILE *departmentptr = fopen("department.txt", "r");    // file of department data
    FILE *combinedptr = fopen("combined.txt", "w");        // file where both personal and department data are combined

    if (personalptr == NULL || departmentptr == NULL || combinedptr == NULL)
    {
        printf("Problem in opening files.\n");
        return 1;
    }
    printf("Name : Talha Rusman\nID : k23-0065\n");
    combineData(personalptr, departmentptr, combinedptr);

    printf("Combined.txt file created successfully.\n");

    fclose(personalptr);
    fclose(departmentptr);
    fclose(combinedptr);
    return 0;
}