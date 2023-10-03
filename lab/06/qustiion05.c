#include <stdio.h>

int main(){
    int i,j,a;
       a=0;
        for(i=1;i<=7;i++){
          if(i%2==0){
               printf("\t");
              printf("%d",a);
              printf("\t");
             printf("%d",a);
              printf("\t");
          }
           else{
              printf("%d",a);
              printf("\t");
              
              printf("%d",a);
              printf("\t");
	      printf("%d",a);
              printf("\t");
              printf("%d",a);
              printf("\t");
              }
           a++;
          printf("\n");

        }  
          
return 0;
}