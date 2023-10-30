/*
* progmer : talha rusman
*Dase: print sparil
*Date:26/10/2023 
*/
#include<stdio.h>
void inwardspril(int n){
	int arr[10][10];
	  // Spiral print
	int i,j;
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
}
void outwardspril(int n){
	int brr[10][10];
	int i,j;
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = 0;
    int count =n * n;
    while(count > tne){
    	for( i = maxc; i >= minc &&count > tne;i--){
    		brr[minr][i]=count;
    		count--;
    	}minr++;
    	for( i=minr; i<=maxr&&count > tne;i++ ){
    		brr[i][minc]=count;
    		count--;
    	}minc++;
    	for( i= minc; i <= maxc&&count > tne;i++){
    		brr[maxr][i]=count;
    		count--;
    	}maxr--;
    	for(i=maxr;i>=minr && count > tne;i--){
    		brr[i][maxc]= count;
    		count--;
    	}maxc--;
    }
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("%d ",brr[i][j]);
		}
		printf("\n");
	}
}



 int main(int argc, char const *argv[])
{
	int n;
	printf("number of row or colume?");
	scanf("%d",&n);
	inwardspril(n);
	printf("\n");
	outwardspril(n);

	return 0;
}