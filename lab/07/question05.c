/*
*programmer:talha rusman
*Dase:print the human
*Date:10/10/23
*/
#include <stdio.h>

void hat(int n) {
	int i, j;
	for (i = 1; i < n; i++) {
		if (i == n - 1) {
			for (j = 1; j <= 1; j++) {
				printf(" ");
			}
			for (j = 1; j <= n + 6; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {

			for (j = 1; j <= 4; j++) {
				printf(" ");
			}
			for (j = 1; j <= n; j++) {
				printf("*");
			}
			printf("\n");
		}
	}

}
void face(int n) {
	int i, j;
	for (i = 1; i <= 5 ; i++) {
		for( j = 1 ; j <= 4 ; j++){
			printf(" ");
		}
		for( j = 1;j <= n;j++){
		   if(i == 1 && j == 1 || i == 1 && j == n)
		   printf("*");
		   else	
		   if(i == 2 && j == n / 2 + 1)
		    printf("|");
		   else
		   if(i == 3 && j == n / 2 ){
             printf("\\");
             printf("_");
             printf("/");
           }
		   else
		   if(i == 5 && j == n / 2 ||i == 5 && j == n / 2 + 2)
		     printf("|");
			else	
		    printf(" ");
		}
		 printf("\n");	
	}
}
void uperbody(int n){
	   int i,j;
	    for(i = 1; i <= n; i++){
	    	for(j = 1; j <= n + 8; j++){
	    		if( i != 1 && j == 3 || i !=1 && j == 4){
	    			printf(" ");
				}else
				if( i != 1 &&  j == n + 5|| i != 1 && j == n + 6){
	    			printf(" ");
				}else
	    		printf("*");
			}
			printf("\n");
		}
	
}
void leg( int n){
	int i,j;
	for(i = 1; i <= n ;i ++){
			for( j = 1 ; j <= 4 ; j++){
			printf(" ");
		}
		for(j = 1; j <= n; j++){
				if( i != 1 && j == n / 2 +1 ){
	    			printf(" ");
				}else
			printf("*");
		}
	    printf("\n");	
	}
}
void shose( int n ){
	int i,j;
	for( i =1; i <= n + 8; i++){
		if(i==1||i==(n+8)/2 + 1|| i == n + 8){
			printf(".");
		}
		else
	     printf("*");
	}
}

int main() {
	int  n;
	printf("enter:");
	scanf("%d", &n);
	hat(n);
	face(n);
	uperbody(n);
	leg(n);
	shose(n);
	return 0;
}
