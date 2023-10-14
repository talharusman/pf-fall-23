#include <stdio.h>

int main() {
    int arr[10][10], i, j, n;
    printf("Enter the number of rows and colume: ");
    scanf("%d", &n);
   

   

    // Spiral print
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = n * n;
    int count = 0;

    while (count < tne) {
        // Print the top row
        for (i = minc; i <= maxc && count < tne; i++) {
            arr[minr][i]=count+1;
            count++;
        }
        minr++;

        // Print the rightmost column
        for (i = minr; i <= maxr && count < tne; i++) {
             arr[i][maxc]=count+1;
            count++;
        }
        maxc--;

        // Print the bottom row if necessary
        for (i = maxc; i >= minc && count < tne; i--) {
             arr[maxr][i]=count+1;
            count++;
        }
        maxr--;

        // Print the leftmost column if necessary
        for (i = maxr; i >= minr && count < tne; i--) {
            arr[i][minc]=count+1;
            count++;
        }
        minc++;
    }
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}








