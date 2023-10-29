#include <stdio.h>

int main() {
    int n,d;
    printf("enter orignal price:");
    scanf("%d",&n);
    if(n<1999){
    	printf("no discount");
    	
	}
    if(n >= 1999 && n < 2000){
    	 d = (n / 100) * 50;
    	printf("the actual amount : %d\n", n);
    	printf(" amount after discount: %d\n", n-d);
    	printf("the saved amount  : %d\n", d);
	}// end of if(n>=1999&&n<2000)
	else if(n >= 2000 && n <= 4000){
    	 d = (n / 100) * 20;
    	printf("the actual amount : %d\n", n);
    	printf(" amount after discount: %d\n", n-d);
    	printf("the saved amount  : %d", d);
        }// end of if(n >= 2000 && n <= 4000)
		else if(n >= 4001 && n <=6000 ){
    	 d = (n / 100) * 30;
    	printf("the actual amount : %d\n", n);
    	printf(" amount after discount: %d\n", n-d);
    	printf("the saved amount  : %d", d); 
	}//end ofif(n >= 4001 && n <=6000 )
	else  if(n > 6000 ){
    	 d = (n / 100) * 50;
    	printf("the actual amount : %d\n", n);
    	printf(" amount after discount: %d\n", n-d);
    	printf("the saved amount  : %d", d); 
	}//end of  if(n > 6000 )
	
    return 0;
}//end main

