/*
*programer: talha rusman
*Desc:count the number of digits
*Date:10/10/23
*/

#include<stdio.h>

int main(){
        int i,n,j,c;
         printf("enter digit:");
         scanf("%d",&n);
             c=0;
              for(i=1;n>=1;i++){
               j=n%10;
              n=n/10;
              c=c+j;
              }
           printf("sum is %d",c);
return 0;
}
