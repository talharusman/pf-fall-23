#include <stdio.h>
void matrixelement(int matrix[][10], int r,int c){
	int i,j,n;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("element ofrow%d,cloume%d:",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
}
void mantipleymatrix(int result[][10],
                      int frist[][10],
					  int secand[][10],
					  int r1,int c1,
					  int r2,int c2){
	    int i,j,k;
	    for(i=0;i<r1;i++){
	    	for(j=0;j<c2;j++){
	    		result[i][j]=0;
			}
		}
	    for(i=0;i<c1;i++){
	    	for(j=0;j<c2;j++){
	    	result[i][j]=frist[i][j]*secand[i][j];	
			}	
		}
}
void display( int result[][10],int r1,int c2){
	         int i,j;
	        for(i=0;i<r1;i++){
	        	for(j=0;j<c2;j++){
	        		printf("%d ",result[i][j]);
				}
				printf("\n");
			}
	
}
int main(){
	int i,j,n,r1,c1,r2,c2;
	int frist[10][10],secand[10][10],result[10][10];
	printf("enter row and colume of frist matrix:");
	scanf("%d%d",&r1,&c1);
	 
	 printf("enter element for frist  matrix:\n");
	    matrixelement(frist,r1,c1);
	
	printf("enter row and colume of secand matrix\n");
	scanf("%d%d",&r2,&c2);
	  
	   while(c1!=c2&& r1 != r2){
	    printf(" error!enter row and colume of secand matrix");
	    scanf("%d%d",&r2,&c2);
	   }
	   
	    matrixelement(secand,r2,c2);
	    addmatrix( result,frist,secand,r1,c1,r2,c2);
	    printf("resltant matrix is.\n");
	    display(result,r1,c2);
	return 0;
}
