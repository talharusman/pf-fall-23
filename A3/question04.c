/**
 * Programmer: Talha Rusman
 * Desc: Prints Max and Total Salaries of Departments
 * Date: 23/11/2023
 * Roll-No: 23K-0065
 */ 
#include <stdio.h>
#include <string.h>

typedef struct {
    int worker_id;
    char frname[20];
    char lsname[20];
    int salary;
    char date_join[50];
    char department[20];
} workers;

typedef struct {
    int worker_id;
    char title[20];
    char atte_form[40];
} title;

typedef struct {
    int worker_id;
    char bonus_date[30];
    int amount;
} bonus;

char dept[][10] = {"HR", "Admin", "Account"};
char (*ptr1)[10] = &dept[0];
char (*ptr2)[10] = &dept[0];

int max_salary(workers worker[8], char *ptr1) {
    int maxsal = 0, id;

    for (int i = 0; i < 8; i++) {
        if (strcmp(worker[i].department, ptr1) == 0) {
            if (worker[i].salary > maxsal) {
                maxsal = worker[i].salary;
                id = worker[i].worker_id;
            }
        }
    }

    return id;
}

int total_salary(workers worker[8],char *ptr2 ){
	int total=0;
	for (int i = 0; i < 8; i++)
	{
		 if (strcmp(worker[i].department,ptr2) == 0){
			total +=worker[i].salary;
		 }
	}
	
	return total;
}
void display_max_salary(workers worker[8]) {
    int id;

    for (int i = 0; i < sizeof(dept) / sizeof(dept[0]); i++) {
        id = max_salary(worker, ptr1[i]);
        printf("%d %s %s %d %s %s\n", worker[id - 1].worker_id, worker[id - 1].frname, worker[id - 1].lsname,
               worker[id - 1].salary, worker[id - 1].date_join, worker[id - 1].department);
    }
}

void display_total_salary(workers worker[8], int n) {
    int total;

    for (int i = 0; i < 3; i++) {
		total=total_salary(worker,ptr2[i]);
        printf("%s _ %d\n",ptr2[i] ,total);
    }
	return;
}

int main() {
    workers worker[8] = {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}};

    bonus bonus[5] = {
        {1, "2016-02-20 00:00:00", 5000},
        {2, "2016-06-11 00:00:00", 3000},
        {3, "2016-02-20 00:00:00", 4000},
        {1, "2016-02-20 00:00:00", 4500},
        {2, "2016-06-11 00:00:00", 3500}};

    title title[8] = {
        {1, "Manager", "2016-02-20 00:00:00"},
        {2, "Executive", "2016-06-11 00:00:00"},
        {8, "Executive", "2016-06-11 00:00:00"},
        {5, "Manager", "2016-06-11 00:00:00"},
        {4, "Asst. Manager", "2016-06-11 00:00:00"},
        {7, "Executive", "2016-06-11 00:00:00"},
        {6, "Lead", "2016-06-11 00:00:00"},
        {3, "Lead", "2016-06-11 00:00:00"}};

	printf("Talha Rusman:\nID 23k-0065\n");
    printf("\n");
    printf("Highest Salaries:\n");
    display_max_salary(worker);
    printf("\n");
    printf("Total Salary:\n");
    display_total_salary(worker, 8);

    return 0;
}
