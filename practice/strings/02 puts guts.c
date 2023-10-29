#include <stdio.h>
#include<string.h>

int main(){
       char str[200];
      // scanf("%s",&str);//only conseder the frist word
       gets(str);//entair santance can be inputs
       scanf("%[^\n]s",&str);
       printf("by printf: %s\n",str);//entair santance can be inputs
      puts(str);
	
	return 0;
}
