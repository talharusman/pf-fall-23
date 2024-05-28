/**
 * Programmer: Talha Rusman
 * Desc: Department Data Stored Using Struct
 * Date: 23/11/2023
 * Roll-No: 23K-0065
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct 
{
	char name[20];
	char role[10];
	int communication;
	int team_work;
	int creativity;
} employee;

// store the depratment of employees
typedef struct 
{
	
	char departname[15];
	employee employees[5];
} department;

int random(int n){
	return rand() % n;
}

void filldata(char names[][20], char roles[][15], department data[]){
	int number;

	int numTr[20] = {0};
	char dept[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	
	for (int i = 0; i < 4; ++i)
	{
		
		int rolTr[5] = {0};
		// eevery dept has 5 employees
		for (int j = 0; j < 5; ++j)
		{
			strcpy(data[i].departname, dept[i]);	

			do {
				number= random(20);
			} while(numTr[number] == 1); //1 is in the array already, meaning that this name has been used before
			numTr[number] = 1;
			strcpy(data[i].employees[j].name, names[number]);

			do {
				number = random(5);
			} while(rolTr[number] == 1);
			rolTr[number] = 1;
			strcpy(data[i].employees[j].role, roles[number]);

			number = random(100) + 10;
			data[i].employees[j].communication = number;

			number = random(100) + 10;
			data[i].employees[j].team_work = number;

			number = random(100) + 10;
			data[i].employees[j].creativity = number;
		}

	}
}
void bestdept(department data[]){
	int sum, best, largest = 0;
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	
     printf("%-15s%-10s\n", "Department", "Sum");
    printf("__________________\n");
	for (int i = 0; i < 4; ++i)
	{
		sum = 0;
		for (int j = 0; j < 5; ++j)
		{
			sum += data[i].employees[j].team_work + data[i].employees[j].creativity + data[i].employees[j].communication;
		}
		printf("%-15s%-10d\n", departments[i], sum);
		if (sum > largest)
		{
			largest = sum;
			best = i;
		}
	}
	
   
	printf("%-15s%-10d\n", departments[best], largest);
	
	 printf("\nBest Department Details:\n\n");
    printf("%-10s%10s%20s%10s%15s\n", "Name", "Role", "Communication", "Teamwork", "Creativity");
    printf("__________________________________________________________________\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%*s %*s %-13d %-11d %-9d\n",-15, data[best].employees[i].name,-15, data[best].employees[i].role, data[best].employees[i].communication, data[best].employees[i].creativity, data[best].employees[i].team_work);
	}
}


int main(){
	// 20 names stored
	char names[][20] = {
        "John", "Alice", "Bob", "Catherine", "David",
        "Emily", "Frank", "Grace", "Henry", "Isabel",
        "Jack", "Karen", "Leo", "Megan", "Nick",
        "Olivia", "Paul", "Rachel", "Sam", "Tina"
    };
	char roles[][15] = {"Trainee", "Executive", "Manager","Director", "Employee"}; 
	// 4 departments array created
	department data[4];
	printf("Talha Rusman:\nId: 23K-0065\n");
    printf("\n");
	// to fill the data array
	filldata(names, roles, data);
	// to output the best department
	bestdept(data);


    return 0;
}
