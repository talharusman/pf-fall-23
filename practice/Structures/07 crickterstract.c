#include<stdio.h>
#include<string.h>
 int main(int argc, char const *argv[])
{
	typedef struct cricter
	{
		char name[30];
		int age;
		int nomach;
		float average;
	}cricter;
	cricter arr[100];
	int n;
	printf("enter the number of cricketer:");
	scanf("%d",&n);

	for(int i=0; i<n;i++){
		printf("enter the name of cricketer noumber %d:",i+1);
		 //scanf("%[^\n]s",arr[i].name);
		scanf("%s",&arr[i].name);
		// gets(&arr[i].name);

		printf("enter age of cricketer noumber %d:",i+1);
		scanf("%d",&arr[i].age);
		printf("enter noumber of maches of cricketer noumber %d:",i+1);
		scanf("%d",&arr[i].nomach);
		printf("enter average runs of cricketer noumber %d:",i+1);
		scanf("%f",&arr[i].average);
	}


	for(int i=0; i<n;i++){
		printf("name=%s\n",arr[i].name);
		printf(" age:%d\n",arr[i].age);
		printf("number of maches: %d\n",arr[i].nomach);
		printf(" average runs :%f\n",arr[i].average);
		printf("\n");
	}

	return 0;
} 