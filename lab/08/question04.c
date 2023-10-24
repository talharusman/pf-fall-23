/*
* progmer :talha rusman
*desc : swaps the value
*date:24/10/2023
*/
#include<stdio.h>
#include <string.h>
#include<stdbool.h>

void chack(char str1[10],char str2[10]){
	int i;
	bool f=false;
	for (i=0 ; str1[i] != '\0'; i++){
		
		if(str1[i]==str2[i]){
		   f= true;
		}else
		  f= false;
		  break;
	}
	if (f){
		printf("Login successful.\n");
		printf("Welcome!");
	}else
	printf("Login failed.");
}


int main(){
	char str1[10]="Secure123";
	char str2[10];
	puts("enter the password of 8 charter:");
	gets(str2);
	chack(str1,str2);
	int i;
	for (i=0 ; str1[i] != '\0'; i++){
		if(str1[i]==str2[i]){
			
		}
	}
	return 0;
}
