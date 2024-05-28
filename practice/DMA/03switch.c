#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("enter day number (1-7) :");
	scanf("%d",&n);

	switch(n){
	    case 1:
		   printf("monday");
		   break;
		case 2:
		   printf("Tuesday\n");
		   break;
		case 3:
		   printf("Wednesday\n");
		   break;
		case 4:
		   printf("Thursday\n");
		   break;
		case 5:
		   printf("Friday\n");
		   break;
		case 6:
		   printf("saturday");
		   break;
		case 7:
		   printf("Sunday");
		   break;
	default :
		printf("inveelid number:");
	}
	return 0;
}