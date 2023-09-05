#include <stdio.h>
#include <math.h>

int main(){
      int b;
      int p;
       
          printf("what is p: ");
          scanf("%d",&p);
          printf("what is b: ");
          scanf("%d",&b);
          
          
          float hyp= sqrt((b*b)+(p*p));
          printf("hyp is: %f",hyp);
return 1;
}//end main
