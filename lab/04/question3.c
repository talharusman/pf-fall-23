/* programer:talha rusman 
* Date: 1292023
* Related file: this program that asks user for a number n, then asks for n more
* integers and prints the sum of their squares.
*/
//--include file--//
#include <stdio.h>

int main() {
	int n,i;// n is any positive integer
	int square_and_sum=0 ; 
    printf("Enter the number (number=>0): ");
    scanf("%d", &n);// in n store the integer 
    int num[10000];//stor more n numbers

    for(i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num[i]); 
    }//end of loop i < n
    for(i = 0; i < n; i++) {
        square_and_sum=square_and_sum+num[i]*num[i];
    }//end of 2nd loop

    printf("The sum of squares is: %d\n", square_and_sum);

    return 0;
}//end main
