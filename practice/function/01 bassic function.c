#include <stdio.h>
void greet(){
	
	printf("hallow \n");
	return;
} 
int b(){
	printf("hi");
	greet();//call greet
	return;
}
int c(){
	printf("by\n");
	b();
	return;
}
int main(){
	c();
	
	return 0;
}
