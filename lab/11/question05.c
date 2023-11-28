/**
 * Programmer: Talha Rusman
 * Desc: data of enploy 
 * Date: 26/11/2023
 * Roll-No: 23K-0065
 */ 

#include <stdio.h>

typedef struct Employee
{
    int employee_id;
    char name[20];
    int salary;
} Employee;

typedef struct Organisation
{
    char organisation_name[20];
    char organisation_number[25];
    Employee emp;
} Organisation;


int main(){
    Organisation org;
    printf("Enter Employee Id, Employee Name, Employee Salary: ");
    scanf("%d %s %d", &org.emp.employee_id, &org.emp.name, &org.emp.salary);
    printf("Enter Organisation Name, Organisation Number: ");
    scanf("%s %s", &org.organisation_name, &org.organisation_number);

    printf("Organisation Name: %s\nOrganisation Number: %s\nEmployee Id: %d\nEmployee Name: %s\nEmployee Salary: %d\n", org.organisation_name, org.organisation_number, org.emp.employee_id, org.emp.name, org.emp.salary);

}
