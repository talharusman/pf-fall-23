/*
 * programer:talha rusman,23k-0065
 *Desc:the value of a<=9 the output should 8=Eight, 9=Nine etc.
 *if a>9 output should even or odd
 *Date:3/10/2023
*/
#include<stdio.h>

int main(){
   int i,a,b;
   printf("enter 2 number :");
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++){
       switch(i){
         case 0:printf("Zero");break;
         case 1:printf("One");break;
         case 2:printf("Two");break;
         case 3:printf("Three");break;
	 case 4:printf("Four");break;
	 case 5:printf("Five");break;
	 case 6:printf("Six");break;
	 case 7:printf("Seven");break;
         case 8:printf("Eight");break;
         case 9:printf("Nine");break;
         default: if(i%2==0){
          printf("even");}
       else printf("odd");
    }//end of switch statmint
   
 }//end for loop
}//end main
