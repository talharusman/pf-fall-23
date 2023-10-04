/*
 * programer:talha rusman,23k-0065
 *Desc:n Fibonacci numbers divisible by 3, 5 or 7 only.
 *Date:3/10/2023
*/
#include<stdio.h>

int main(){
   int i,sum,a,b,n,sum2;
   printf("enter any number :");
   scanf("%d",&n);
   a=0;
  sum2=0;
   b=1;
  sum=a+b;
   for(i=1;b<=n;i++){
     a=b;
    b=sum;
    sum=a+b;
     printf("%d ",a);
     if(a%3==0||a%5==0||a%7==0){
       sum2=sum2+a;
  }
    
    }
    printf("sum is.%d",sum2);
}//end main
