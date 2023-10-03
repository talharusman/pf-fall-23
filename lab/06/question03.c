/*
 * programer:talha rusman,23k-0065
 *Desc:for loop in these program
 *Date:3/10/2023
*/
#include<stdio.h>

int main(){
   int i,j,sum,a,n1,n2;
   printf("enter 1st number :");
   scanf("%d",&n1);
    printf("enter 2nd number :");
   scanf("%d",&n2);
     if(n1<n2){
      a=n1; 
    }else
     a=n2;
   for(i=2;i<a;i++){
      if(n1%i==0&&n2%i==0){ 
       }
       }int gdc=i;
      
       printf("GDC is.%d\n",gdc);
     int lcm=(n1*n2)/gdc;
     printf("LCM is.%d\n",lcm);
    return 0;
}//end main