#include<stdio.h>
void lighten(int arr[][8], int row,int col);
void display(int arr[][8],int row,int col);
int main(int argc, char const *argv[])
{
    int arr[8][8];
    int row=8,col=8;
    lighten(arr,row,col);
    display(arr,row,col);
    return 0;
}

void lighten(int arr[][8], int row,int col){
     
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        arr[i][j] = 255;
       }
       
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==0){
                if(j==0||j==7){
                    arr[i][j] = 255;
                }
                if(j>0&&j<7){
                    arr[i][j]=10;
                }
                //end
            }//end of firnst line
            if(i==1||i==2){
                if(j==3||j==4){
                    arr[i][j] = 0;
                }
            }
            if(i>0&&i<row-2){
                if(j==0||j==1||j==6||j==7){
                    arr[i][j] = 0;
                    
                }
            }
        }
        
    }
    return;
}//end of linghten functinon

void display(int arr[][8],int row,int col){

    printf("\n\n\n");
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==255){
                printf("%d ",arr[i][j]);
            }
            if(arr[i][j]==0){
                printf("%d   ",arr[i][j]);
            }
            if(arr[i][j]==10){
                printf("%d  ",arr[i][j]);
            }
        }
        printf("\n"); 
    }
    
    return;
}
