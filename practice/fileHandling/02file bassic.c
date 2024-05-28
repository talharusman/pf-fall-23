#include<stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fptr;
	fptr=fopen("text.txt","r");
	char ch;
      fscanf(fptr,"%c",&ch);
      printf("character=>%c\n",ch );
     fclose(fptr);
     fptr=fopen("text.txt","w");
     fprintf(fptr, "%c\n",'M' );
     fprintf(fptr, "%c\n",'A' );
     fprintf(fptr, "%c\n",'N' );
     fprintf(fptr, "%c\n",'G' );
     fprintf(fptr, "%c\n",'O' );

	return 0;
}