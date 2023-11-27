
/*
*programer : talha rusman
* roll number : 23k-0065
* date: 21/11/23
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct date{
        int day;
        int month;
        int year;

    }date;
    date d1;
    date d2;

    printf("for date 1\n");
    printf("enter the day");
    scanf("%d",&d1.day);
    printf("enter the month ");
    scanf("%d",&d1.month);
    printf("enter the year");
    scanf("%d",&d1.year);
    printf("\n");

     printf("for date 2\n");
    printf("enter the day");
    scanf("%d",&d2.day);
    printf("enter the month ");
    scanf("%d",&d2.month);
    printf("enter the year");
    scanf("%d",&d2.year);
  
     bool flag=true;
    if(d1.day==d2.day&&d1.month==d2.maont&&d1.year==d2.year){
         flag=false;
    }
    if(flag){
        printf("dater are nont same");
    }else
    printf("dater are not same");

    return 0;
}
