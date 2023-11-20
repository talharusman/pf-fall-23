/**
 * Programmer: TALHA RUSMAN
 * Desc: Find the best flight
 * Date: 5/11/2023
 */ 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
	int data[5][4] = {{1, 300, 0, -1},
				{1, 320, 1, 310},
				{0, -1, 1, 280},
				{1, 380, 0, -1},
				{1, 375, 1, 400}};
	char weekDays[5][10] = {{"Monday"},
					{"Tuesday"},
					{"Wednesday"},
					{"Thursday"},
					{"Friday"}};
	char topHeadings[4][10] = {{"Morning"},
							   {"Price"},
							   {"Evening"},
							   {"Price"}};
	char day, dayChoice,timeChoice, time, days[10];
	int price, lowestRow, lowestCol;
	printf("Do you want a specific day(Y/N): ");
	scanf(" %c", &dayChoice);
	if (dayChoice == 'N') {
		printf("Do you want a specific time(Y/N): ");
		scanf(" %c", &timeChoice);
		if (timeChoice == 'Y'){
			printf("Which Time Do You Prefer\nEnter M for Morning, E for Evening: ");
			scanf(" %c", &time);
			if (time == 'M') {
				price = 1000000;
				for (int i = 0; i < 5; ++i)
				{
					if (data[i][0] == 1) {
						if (data[i][1] < price && data[i][1] != -1){
							price = data[i][1];
							lowestRow = i;
							lowestCol = 0;
						}
					}
				}
			}
			else if (time == 'E'){
				price = 1000000;
				for (int i = 0; i < 5; ++i)
				{
					if (data[i][2] == 1) {
						if (data[i][3] < price && data[i][3] != -1){
							price = data[i][3];
							lowestRow = i;
							lowestCol = 2;
						}
					}
				}

			}
		}
		else if (timeChoice == 'N'){
			int col1 = 0;
			int col2 = 1;
			price = data[0][1];
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 5; ++j)
				{
					if (data[j][col1] == 1)
					{
						if (data[j][col2] < price)
						{
							price = data[j][col2];
							lowestRow = j;
							lowestCol = col2-1; 
						}
					}
				}
				col1 += 2;
				col2 += 2;
			}
		}
		printf("Flight Available on %s %s costs: %d", weekDays[lowestRow], topHeadings[lowestCol], price);
	}
	else if (dayChoice == 'Y'){
		int row;
		printf("Please Enter The Day: Monday, Tuesday, Wednesday, Thursday, or Friday: ");
		getchar();
		gets(days);
		if (strcmp(days, "Monday") == 0){
			row = 0;
		} 
		else if (strcmp(days, "Tuesday") == 0){
			row = 1;
		} 
		else if (strcmp(days, "Wednesday") == 0){
			row = 2;
		} 
		else if (strcmp(days, "Thursday") == 0){
			row = 3;
		} 
		else if (strcmp(days, "Friday") == 0){
			row = 4;
		}
		for (int i = 1; i < 4; i+=2)
		{
			if (data[row][i-1] == 1)
			{
				if (i-1 == 0){
					printf("Flight Available for Morning Costs %d\n", data[row][i]);
				}
				else if (i-1 == 2){
					printf("Flight Available for Evening Costs %d", data[row][i]);
				}
			}
		}
	}
}
