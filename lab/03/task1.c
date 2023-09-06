#include <stdio.h>

int main() {
    int n1;
    int n2;
    printf("enter number 1 : ");
    scanf("%d",&n1);
    printf("enter number 2 : ");
    scanf(" %d",&n2);
    
    
    int add= n1+n2;
    printf("add : %d",add);
    
    int mun=n1*n2;
    printf("\nmun  : %d",mun);
      
    int subtract=n1-n2;
    printf("\nsubtract : %d",subtract);
    
    float divid=(n1*1.0)/(n2*1.0);
    printf("\ndivid : %f",divid);

    
  
    return 0;
}//end main
