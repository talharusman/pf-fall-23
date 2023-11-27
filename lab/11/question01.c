/*
*programer : talha rusman
* roll number : 23k-0065
* date: 21/11/23
*/

#include<stdio.h>
#include<string.h>

int main(){
   typedef  struct student{
       int rollnum;
       char name[30];
       char dept[50];
       char course[40];
       int yearjoin;

    }data;
    data arr[450];
    int n;
    printf("enter the number of student");
    scanf("%d",&n);

    for (int i=0; i < n;i++){
        printf("enter roll number of student no %d: ",i+1);
        scanf("%d",&arr[i].rollnum);
        printf("enter name of student no %d: ",i+1);
         scanf("%s",arr[i].name);
        printf("enter department of student no %d: ",i+1);
       scanf("%s",arr[i].dept);
        printf("enter course of student no %d: ",i+1);
         scanf("%s",arr[i].course);
        printf("enter year of join of student no %d :",i+1);
        scanf("%d",&arr[i].yearjoin);
    }

    for(int i = 0; i < n; i++){
        printf("name of student no %d is ->%s\n",i+1,arr[i].name);
        printf(" joining year of student no %d is -> %d\n",arr[i].yearjoin);
    }
     int j;
     printf("enter the roll number of student whose data you need to find");
     scanf("%d",&j);

     for (int i = 0; i < n; i++){
         if(arr[i].rollnum==j){
             printf("roll number is -> %d\n",arr[i].rollnum);
             printf("name of student is ->%s\n",arr[i].name);
            
             printf("course of student is -> %s\n",arr[i].course);
             printf("department of student iis-> %s\n",arr[i].dept);
              printf(" joining year of student is-> %d->\n",arr[i].yearjoin);
              break;
         }
     }

    return 0;
}
