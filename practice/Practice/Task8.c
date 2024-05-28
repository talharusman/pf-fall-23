#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int row=0,col=0;
    FILE *fptr = fopen("col_row.txt","r");
    if (fptr==NULL){
        printf("problume in file opning :\n");
        return 1;
    }
    char line,chr;
    chr=fgetc(fptr);
    while(chr!=EOF){
        if (row==0&&chr==','){
            col++;
        }else
        if(chr=='\n'){
            row++;
        }
        chr=fgetc(fptr);
    }

    printf("row=%d col=%d",row,col);
    return 0;
}
