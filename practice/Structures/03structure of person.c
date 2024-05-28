#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
   struct person
   {
   	char name[50];
    int sealry;
    int age;
   }a,b;

   a.sealry=5638;
   a.age=65;
   strcpy(a.name,"zain");

    a.sealry=3438;
   a.age=45;
   strcpy(b.name,"talha");

   printf("%d\n",a.sealry );
   printf("%s",b.name);

   	return 0;
}