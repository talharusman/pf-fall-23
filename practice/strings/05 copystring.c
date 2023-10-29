#include<stdio.h>
#include<string.h>
// it is work full
int main(){
	char s1[200]="talha rusman";

	char* s2=s1;
     s1[0]='p';
	printf("%s",s2);

	
	return 0;
}
