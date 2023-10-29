#include<stdio.h>
#include<string.h>

int main(){
	char str[20]="my name is tlaha";
	int i;
    int	x=strlen(str);
	//incert i at index 4
	for(i=x;i>=4;i--){
		str[i+1]=str[i];
	}
	str[4]='i';
	printf("%s",str);
	
	return 0;
}
