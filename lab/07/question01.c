
/*
*programer: talha rusman 23k-0065
*Dase: without divison oprater
*Date:10/10/23
*/
#include <stdio.h>

int main(){
            int num1,num2,i;
           printf("enter number 1:");
           scanf("%d",&num1);
           printf("enter number 2:");
           scanf("%d",&num2);
           if(num1>num2){
              for (i=0;num1>0;i++){
                  num1-=num2;
             }
             }
             else
             for (i=0;num2>0;i++){
                  num2-=num1;
             }
             printf("%d",i);  

return 0;
}