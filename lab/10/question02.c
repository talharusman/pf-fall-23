/**
 * Programmer: talha rusmana 
 * Desc: Swapping values using XOR and Pointers with different types
 * Date: 21/11/2023
 * Roll-No: 23K-0065
 */ 
#include <stdio.h>

void swap(void *ptr1, void *ptr2, char type);
int main(){
	int a = 2,b = 3;
	char l1 = 'f', l2 = 'g';
	float n1 = 2.5, n2 = 3.5;
	swap((void *) &a, (void *) &b, 'i');
	printf("a: %d, b: %d\n", a, b);
	swap((void *) &l1, (void *) &l2, 'c');
	printf("l1: %c, l2: %c\n", l1, l2);
	swap((void *) &n1, (void *) &n2, 'f');
	printf("n1: %f, n2: %f\n", n1, n2);
}

void swap(void *ptr1, void *ptr2, char type){
	if (type == 'i' || type == 'f')
	{
		*(int *)ptr1 = *(int *)ptr1 ^ *(int *)ptr2;
		*(int *)ptr2 = *(int *)ptr1 ^ *(int *)ptr2;
		*(int *)ptr1 = *(int *)ptr1 ^ *(int *)ptr2; 
	}
	else if (type == 'c')
	{
		*(char *)ptr1 = *(char *)ptr1 ^ *(char *)ptr2;
		*(char *)ptr2 = *(char *)ptr1 ^ *(char *)ptr2;
		*(char *)ptr1 = *(char *)ptr1 ^ *(char *)ptr2;
	}
	else {
		printf("Incorrect Data Type\n");
	}
}
