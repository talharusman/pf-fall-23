#include <stdio.h>
void greet(){
	
	printf("hallow \n");
	return ;
} 
int c(){
	int b();
	printf("by\n");
	 
	b();//call b
	return 0;
}
int main(){
	c();//call c
	
	return 0;
}
int b(){
	printf("hi\n");
	greet();//call greet
	return 0;
	}
