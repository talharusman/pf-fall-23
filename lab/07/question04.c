/*
*programer: talha rusman 23k-0065
*Dase: without divison oprater
*Date:10/10/23
*/
#include <stdio.h>

int main(){
            int i,j,c,r;
           int matrix[3][3];
     
            for(i=0;i<3;i++){ 
                    for(j=0;j<3;j++){
                    printf("entere ementment of (row%d,columb%d):",i+1,j+1);
                    scanf("%d",&matrix[i][j]);
                 }
           }
               for(i=0;i<3;i++){ 
                    for(j=0;j<3;j++){
                    printf("%d ",matrix[i][j]);
                     if(j==2){
                       printf("\n");
                   }
                 }
           }
                   if(matrix[0][1]==matrix[1][0]){
                      if(matrix[0][2]==matrix[2][0]){
                         if(matrix[0][1]==matrix[1][0]){
                          printf("matrix is sumatric");
                                }
                                 else 
                                 printf("matrix is not sumatric");
                       }
                         else 
                        printf("matrix is not sumatric");
                    } 
                   else 
                        printf("matrix is not sumatric");
return 0;
}