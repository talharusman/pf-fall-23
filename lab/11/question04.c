/*
*programer : talha rusman
* roll number : 23k-0065
* date: 21/11/23
*/

#include <stdio.h>
#include <string.h>

// Define the structure to store employee information
struct Employee {
    char name[50];
    float salary;
    int hoursWorked;
};

// Function to calculate the salary increase based on hours worked
float calculateSalaryIncrease(int hoursWorked) {
    if (hoursWorked >= 8 && hoursWorked < 10) {
        return 50.0;
    } else if (hoursWorked >= 10 && hoursWorked < 12) {
        return 100.0;
    } else if (hoursWorked >= 12) {
        return 150.0;
    } else {
        return 0.0;
    }
}

int main() {
    // Declare an array of structures to store information for 10 employees
    struct Employee employees[10];

    // Input information for each employee
    for (int i = 0; i < 10; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);

        printf("Enter the hours of work per day for employee %d: ", i + 1);
        scanf("%d", &employees[i].hoursWorked);

        printf("\n");
    }

    // Increase the salary based on hours worked and print the final salaries
    printf("Employee Details with Final Salaries:\n");
    for (int i = 0; i < 10; i++) {
        float increase = calculateSalaryIncrease(employees[i].hoursWorked);
        employees[i].salary += increase;

        printf("Name: %s\n", employees[i].name);
        printf("Final Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
