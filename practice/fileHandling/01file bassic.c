#include<stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fptr;
	fptr=fopen("text.txt","w");
	if(fptr==NULL){
		printf("file doesn't exist\n");
	}else
	fclose(fptr);

	return 0;
}