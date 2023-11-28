#include<stdio.h>
#include<string.h>

int main(){
  typedef struct corse
  {
     char course_code[10];
     char course_name[30];
     float course_cgpa;
     int semester;

  }corse;

     corse arr[1000];
     int n;
     printf("enter the number of student:");
     scanf("%d",&n);
      int i;
     for ( i = 0; i < n; i++)
     {
         printf("enter the corse code:");
         scanf("%s",arr[i].course_code);
         printf("enter the name of course:");
         scanf("%s",arr[i].course_name);
         printf("enter the CGPA:");
         scanf("%f",&arr[i].course_cgpa);
         printf("enter the semester:");
         scanf("%d",&arr[i].semester);
     }
     FILE *fptr;
     fptr=fopen("question03.txt","w");
     for (  i = 0; i < n; i++)
     {
        fprintf(fptr,"corse code->%s\n",arr[i].course_code);
        fprintf(fptr,"corse neme->%s\n",arr[i].course_name);
        fprintf(fptr,"course cgpa->%f\n",arr[i].course_cgpa);
        fprintf(fptr,"semester->%d",arr[i].semester);
     }
     
     
  

    return 0;
}
