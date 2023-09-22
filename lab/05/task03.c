#include<stdio.h>

int main(){
           char i;
          printf("enter any charter:");
          scanf("%c",&i);
          switch(i){
          case 'y': 
		printf("deleat successfully");
		break;
          case 'Y':
		printf("deleat successfully");
		break;
          case 'n':
		printf("deleat cenceld");
		break;
          case 'N':
		printf("deleat cenceld");
		break;
          default: 
		printf("choos a right option");
       }//end of swich     
 return 0;

}//end main
