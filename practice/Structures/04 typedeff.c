#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    typedef struct book{
   	char name[50];
   	float price;
   	int nopag;
   }bo;

   bo a;
   bo b;
   bo c;
   a.price=340.5;
   a.nopag= 144;
   strcpy(a.name,"taha rusman");
   
   b.price=34.5;
   b.nopag= 400;
   strcpy(b.name,"physics");


   printf("%f\n",a.price );
   printf("%d\n",a.nopag );
   printf("%s\n",a.name );

   printf("%f\n",b.price );
   printf("%d\n",b.nopag );
   printf("%s\n",b.name );
	return 0;
}