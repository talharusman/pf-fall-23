/*
*programmer:talha rusman
*Dase:find a continuous sub-array which adds to a given number S.
*Date:16/10/23
*/
#include <stdio.h>

int main() {
    int n,i,s;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter the sum S: ");
    scanf("%d", &s);

    int A[n];
    printf("Enter the elements of the array:\n");
    for (i=0;i<n; i++){
        scanf("%d", &A[i]);
    }
    int st=0, end=0;
    int Sum=0;
    int found=0;
    for (i=0;i<n;i++){
        Sum+=A[i];
        while (Sum > s){
        Sum-=A[st];
            st++;
        }
        if (Sum==s){
            end=i;
            found=1;
            break;
        }
    }

    if (found){
        printf("The Elements from Index %d to %d when summed result in the output of %d.\n",st,end,s);
    } else {
        printf("no subarray found with the given sum %d.\n", s);
    }

    return 0;
}
