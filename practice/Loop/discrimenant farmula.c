#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("enter velue of a:");
	scanf("%d",&a);
	printf("enter velue of b:");
	scanf("%d",&b);
	printf("enter velue of c:");
	scanf("%d",&c);
	
   int	x= ( b * b ) - (4 * a * c); 

	if(x==0){ 
	 float r1=-b / (2 * a);
	 float r2=r1;
		printf("root 1= %.2f\n",r1);
		printf("root 2= %.2f\n",r2);
		printf("roots are equal and real.");
	}//end of if x= 0
	
	else if(x>0){
	float	r1=(-b + sqrt(x)) / (2 * a);
	float	r2=(-b - sqrt(x)) / (2 * a);
	    printf("root 1= %.2f\n",r1);
		printf("root 2= %.2f\n",r2);
		printf("roots are unequal and real. "); 
		
		}// end of if x > 0
	
	else if(x<0){
	float	r1=(-b + sqrt(x)) / (2 * a);
	float	r2=(-b - sqrt(x)) / (2 * a);
	    printf("root 1= %.2f\n",r1);
		printf("root 2= %.2f\n",r2); 
		printf("roots are unequal and complex. ");
	}//end of if x < 0
	
	return 0;
}//end main
