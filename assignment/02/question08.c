/*
* progmer : talha rusman
*Dase: Multiplying the digits of an integer and continuing the process
*Date:26/10/2023 
*/
#include <stdio.h>

int calculater(int n) {
    int i, a, j, munt, count = 0; // Initialize munt and count.
         printf("%d\t",n);
    for (i = 0; n > 9; i++) { // Change the condition to n > 

        munt = 1; // Reset munt to 1 for each iteration
        while (n != 0) {
            a = n % 10;
            n /= 10;
            munt *= a;
        }
         printf("%d\t", munt);
        n = munt;
    }
    printf("\n");
    return i;
}

int main() {
     int a,n;
      while(1){
    printf("Enter a positive integer (EOF to exit): ");
    if(scanf("%d", &n) != 1){
    	break;
    }
    a = calculater(n);
    printf("the persistence number of %d is %d\n",n,a);
    }
    return 0;
}