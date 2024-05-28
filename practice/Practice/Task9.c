#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char cellnamedata[4][2]={{'i','n'},
                             { 1 ,'l'},
                             { 2 ,'k'},
                             { 3 ,'L'}};
    
    float cellexpdate[5][6]= {{'G','L','s','n','l','k'},
                             { 1 ,2.3,1.7,4.3,3.4,4.5},
                             { 2 ,1.5,3.6,8.1,5.5,2.9},
                             { 3 ,4.1,6.6,5.3,3.9,8.1},
                             { 4 ,9.9,2.7,6.2,5.8,3.3}};
        // for (int i = 0; i < 5; i++)
        // {
        //     for (int j = 0; j < 6; j++)
        //     {
        //         printf("%.1f ",cellexpdate[i][j]);
        //     }
        //     printf("\n");
        // }
          int k=1,row=0,col=0;
          char margedata[4][5];
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if(cellnamedata[k][1]==cellexpdate[i][j]){
                     
                }
            }
            
        }
        
        
    return 0;
}
