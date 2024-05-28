#include<stdio.h>
#include<stdbool.h>

int main(int argc, char const *argv[])
{
   typedef struct date
   {
     int day;
     int month;
     int year;   	
   }date;
    date a,b;

   //a->4/11/1990
   //b->3/5/2023
   a.day=4;
   a.month=11;
   a.year=1990;

   b.day=3;
   a.month=5;
   b.year=2023;
   bool flage=true;
   if(a.day!=b.day) flage= false;
   if(a.month!=b.month) flage= false;
   if(a.year!=b.year) flage=false;

   if(flage){
   	printf("the date are same:\n");
   }else
   printf("the date are not same:\n");
	return 0;
}