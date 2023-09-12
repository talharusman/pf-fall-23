/* programer:talha rusman 
* Date: 12-9-2023
* Related file:this  program that asks user for appropiate
*  inputs and then uses the quadratic formula to return the solutions.  
*/
//--include file--//
#include <stdio.h>
#include<math.h>
int main(){
    int a;//value with square veriable
    int b;//value with liner veriable
    int c;//constant in quadratic eqution
     printf("enter the value of a!=0 from quadratic equation: ");
     scanf("%d",&a);
     printf("enter the value of b from quadratic equation: ");
     scanf("%d",&b); 
     printf("enter the value of c from quadratic equation :");
     scanf("%d",&c);
	  
        float ans1 = ( b + sqrt ( b * b - ( 4 * a * c ) ) ) / 2 * a;
        float ans2 = ( b - sqrt ( b * b - ( 4 * a * c ) ) ) / 2 * a;
      printf("ans 1 is : %.1f\n",ans1);
      printf("ans 2 is : %.1f",ans2);
return 0;     
}//end main  
