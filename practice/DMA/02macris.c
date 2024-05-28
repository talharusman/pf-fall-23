#include<stdio.h>
#define pi 3.14159265359
#define area(r) (pi*r*r)
float area(float r){
 	return pi*r*r;
}

int main(int argc, char const *argv[])
{

	printf("%f\n",area(10));
	return 0;
}