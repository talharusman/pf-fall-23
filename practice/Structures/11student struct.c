#include<stdio.h>
#include<string.h>
typedef struct student
{
	int rno;
	char name[20];
	char dept[20];
	char course[40];
	int yearofjoining;
}student;

void compair(student s1,student s2){
	int a=strcmp(s1.dept,s2.dept);
	if(a==0){
		printf("deportment of both student are same");
	}else
	printf("deportment of both student are not same");
}

int main(int argc, char const *argv[])
{
    student s1,s2;
	s1.rno=230034;
	strcpy(s1.name,"hassaan");
	strcpy(s1.dept,"cs");
	strcpy(s1.course,"math");

	s2.rno=230035;
	strcpy(s1.name,"whab");
	strcpy(s1.name,"madical");
	strcpy(s1.name,"bilogy");

	 compair(s1,s2);



	return 0;
}