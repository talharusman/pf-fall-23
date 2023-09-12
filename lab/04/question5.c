/* programer:talha rusman 
* Date: 12-9-2023
* Related file:this program that asks DOB of two persons and then prints who is older. 
*/
//--include file--//
#include <stdio.h>
#include<math.h>
int main(){
	int y1,m1,d1;
	int y2,m2,d2;
	   printf("year of berth of 1st person:");
	   scanf("%d",&y1);
	   printf("year of berth of 2nd person:");
	   scanf("%d",&y2);
	   
	   if( y1 == y2){
	   	printf("month of berth of 1st person:");
	   	scanf("%d",&m1);
	   printf("month of berth of 2nd person:");
	   scanf("%d",&m2);
	       
		   if( m1==m2){
	     printf("date of berth of 1st person:");
	   	scanf("%d",&d1);
	   printf("date of berth of 2nd person:");
	   scanf("%d",&d2);
	      
		  if(d1==d2){
	   
	   printf("both have same age");
        }else{
        	if(d1>d2){
        		printf("2nd person is older ");
			}else{
				printf("1st person is older");
			}//end of else d1>d2
		}         
		 }else{
		 	if( m1 > m2 ){
	   	printf("2nd person is older");
	   }//end if m1>m2
	   if( m1 < m2){
	   	printf("1st person is older");
		 }//end of m1<m2
	  } //end else m1==m2
	  }else{
	   if( y1 > y2 ){
	   	printf("2nd person is older");
	   }//end if y1>y2
	   if( y1 < y2){
	   	printf("1st person is older");
	   }// end if y1<y2
      }//end else y1==y2   
    return 0;     
}//end main  
