/*
*programer: talha rusman 23k-0065
*Dase: without divison oprater
*Date:10/10/23
*/
#include <stdio.h>

int main(){
            int i,j,c,r;
           int matrix1[3][3];
            int matrix2[3][3];
            int matrix[3][3];
            for(i=0;i<2;i++){ 
                    for(j=0;j<2;j++){
                    printf("entere ementment of matrix1 (i%d,j%d):",i+1,j+1);
                    scanf("%d",&matrix1[i][j]);
                 }
           }
           
                           for(i=0;i<2;i++){ 
                             for(j=0;j<2;j++){
                    printf("entere ementment of matrox2(i%d,j%d):",i+1,j+1);
                    scanf("%d",&matrix2[i][j]);
                   }
                }
                  printf("matrix 1\n");
               for(i=0;i<2;i++){ 
                    for(j=0;j<2;j++){
                    printf("%d ",matrix1[i][j]);
                     if(j==1){
                       printf("\n");
                   }
                 }
                }
                 printf("matrix 2\n");
               for(i=0;i<2;i++){ 
                    for(j=0;j<2;j++){
                    printf("%d ",matrix2[i][j]);
                     if(j==1){
                       printf("\n");
                      }
                    }
                }
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                    matrix[i][j]=matrix1[i][j]*matrix2[i][j]
                    }
                }
               for(i=0;i<2;i++){ 
                    for(j=0;j<2;j++){
                    printf("%d ",matrix[i][j]);
                     if(j==1){
                       printf("\n");
                   }
                 }
           }
        
}
