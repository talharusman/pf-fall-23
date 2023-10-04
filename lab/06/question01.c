/*
 * programer:talha rusman,23k-0065
 *Desc:number is perfect or not
 *Date:3/10/2023
*/
#include<stdio.h>

int main(){
   int i,sum,a,n;
   printf("enter any number :");
   scanf("%d",&n);
    sum=0;
   for(i=1;i<n;i++){
   if(n%i==0){
      sum=sum+i;
      }
   }if(sum==n){
    printf("perfect numbe.");
   }else
   printf("not perfect numbe.");
    
}//end main
