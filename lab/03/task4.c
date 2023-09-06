#include <stdio.h>

int main() {
        int orignalprice;
        printf("what is orignal price?");
        scanf("%d",&orignalprice);
        
        float discountprice=orignalprice-((orignalprice*20)/100);
        
        
    printf("discountprice is: %f",discountprice);
  
    return 0;
}//end main
