#include<stdio.h>
#include<stdlib.h>
struct employee{
 int eid;
 char ename[20];
};
struct date{
 int joiningYear;
};

struct record{
 struct employee emp;
 struct date dt;
};
void main(){
struct record rcd[2]={
{{101,"Asad"}, 2010},
 {{102,"Bilal"}, 2014}};
 int i;
 for(i = 0; i <2; i++){
 printf("Employee ID: %d \nName: %s \nJoining Year: %d\n\n", rcd[i].emp.eid, rcd[i].emp.ename, rcd[i].dt.joiningYear);
}
}