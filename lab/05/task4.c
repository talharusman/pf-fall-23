#include <stdio.h>
#include <math.h>

main(){
      char n;
      float i;
      float j; 
      printf("entry 1st number");
      scanf("%f",&i);
       printf("entry 2nd number");
      scanf("%f",&j);
      printf("entry any operater");
      scanf(" %c",&n);
      switch(n){
      case '-':
        printf("%.1f",i-j);break;
      case '+':
      printf("%.1f",i+j);break;
        
      case '*': 
      printf("%.1f",i*j);break;
      case '/':
      printf("%.1f",i/j);break;
      default:printf("errar");  
      }//end of switch
}// end to main
