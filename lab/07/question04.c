/*
*programer: talha rusman 23k-0065
*Dase:matrix is sumatry or not
*Date:10/10/23
*/
#include <stdio.h>
#include<stdbool.h>

int main(){
            int i,j,n;
           int A[3][3];
           printf("enter the number of row or colume:");
           scanf("%d",&n);
           
            printf("entere ementment of A matrix:");
            for(i=0;i<n;i++){ 
                    for(j=0;j<n;j++){
                    scanf("%d",&A[i][j]);
                 }
           }
           bool flag=false; 
           for (i=0;i<n;i++){
                flag=false; 
                for (j=0;j<n;j++){
                    if(A[i][j]==A[j][i]){
                       flag=true;
	         }
                 }
             }
            if(flag){
                 printf("matrix is Symmetric.");
            }else
                printf("matrix is not Symmetric.");
return 0;
}// end main
