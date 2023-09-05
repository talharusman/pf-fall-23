include <stdio.h>

int main() {
    int n1;
    int n2;
    printf("enter number 1 : ");
    scanf("%d",&n1);
    printf("enter number 2 : ");
    scanf(" %d",&n2);
    
    
    int add=n1+n2;
     printf("add : %d",add);
     int mun=n1*n2;
      printf("mun  : %d",mun);
      
      
    if("n1>n2"){
        int subtract=n1-n2;
        printf("subtract : %d",subtract);
        int divid=n1/n2;
        printf("divid : %d",divid);
    }else{
        int subtract=n2-n1;
        printf("subtract: %d",subtract);
        int divid=n2/n1;
        printf("divid: %d",divid);
    }
    return 0;
}//end main
