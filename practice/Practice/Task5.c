#include<stdio.h>
#include<stdlib.h>

void display(int **ptr,int row,int col){
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    
    return;
}
int main(int argc, char const *argv[])
{
    int row = 3, col = 3;
    int **ptr = (int **)malloc(row * sizeof(int *));
    
    for (int i = 0; i < row; i++)
    {
        *(ptr + i) = (int *)malloc(col * sizeof(int));
    }
    printf("enter matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&(*(*(ptr+i)+j)));
        }
    }
     display(ptr,row,col);
    
    return 0;
}