#include <stdio.h>
#include<string.h>

int main(){
       char str[200];
       puts("enter a string");
       gets(str);
       puts("the revers  string is:");//ye khod hi \n bhi dal dy ga 
       int size=0;
       int i=0;
       int j;
       while (str[i]!='\0'){
       	size++;
       	i++;
	   }
	   for (i=0,j=size-1;i<=j;j--,i++){
	   	  char temp = str[i];
	   	  str[i]=str[j];
	   	  str[j]=temp;
	   	   
	   }
	   
       puts(str);
	return 0;
}
