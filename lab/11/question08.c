/**
 * Programmer: talha rusman 
 * Desc: Volume of a box, height less than 41
 * Date: 26/11/2023
 * Roll-No: 23K-0065
 */ 
#include <stdio.h>

typedef struct vol
{
	int length;
	int width;
	int height;
} vol;

int main(){
	vol box;
	printf("Enter Length, Width, Height\n");
	scanf("%d %d %d", &box.length, &box.width, &box.height);
	if (box.height < 41)
	{
		printf("%d\n", box.length * box.width * box.height);
	}
}
