/**
 * Programmer: Talha Rusman 
 * Desc: Type Casting pointers to create a universal printing function
 * Date: 21/11/2023
 * Roll-No: 23K-0065
 */ 
#include <stdio.h>

void printArray(void *ptr, int size, char type);
int main(){
	char charArray[3] = {'a', 'b', 'c'};
	int numArray[3] = {1, 2, 3};
	float floatArray[3] = {1.2, 2.1, 3.2};

	printArray((void *)numArray, 3, 'i');
	printf("\n");
	printArray((void *)charArray, 3, 'c');
	printf("\n");
	printArray((void *)floatArray, 3, 'f');
	
return 0;
}

void printArray(void *ptr, int size, char type){
	for (int i = 0; i < size; ++i)
	{
		if (type == 'i')
		{
			printf("%d ", *((int*)ptr + i));
		}
		else if (type == 'c')
		{
			printf("%c ", *((char*)ptr + i));
		}
		else if (type == 'f')
		{
			printf("%f ", *((float*)ptr + i));	
		}
		else{
			printf("Not a data type\n");
		}
	}
}
