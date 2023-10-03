/*
 * programer:talha rusman,23k-0065
 *Desc:print the sum of n given number 
 *Date:3/10/2023
*/
#include <stdio.h>

main(){  
    int i,j,a,b[100];
    printf("enter how many numbers add:");
    scanf("%d",&a);
    int sum=0,k=1;
    for(i=0;i<a;i++){
    printf("enter numbers %d:",k);
    scanf("%d",&b[i]);
    }
    k++;
    for(i=a-1;i>=0;i--){
     sum=sum+b[i];
    }
    printf ("sum is .%d",sum);

}// end to main
