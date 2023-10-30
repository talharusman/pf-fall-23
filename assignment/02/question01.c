/*
* progmer : talha rusman
*Dase: print the detail of batsman
*Date:26/10/2023 
*/
#include<stdio.h>

int main()
{
	int r,c;
	printf("entr number of  batsmen=");
    scanf("%d",&r);
    printf("number of innings=");
    scanf("%d",&c);
    int arr[r][c];
    // for take input from user
    for (int i = 0; i < r; i++){
    	printf("give detail for batsmen no %d\n",i+1 );

    	for(int j = 0; j < c; j++){
    		printf("runs in inning no %d=",j+1 );
    		scanf("%d",&arr[i][j]);
    	}
        printf("\n");
    }//end of taking input
   
    //show and process for output// 
    for (int i = 0; i < r; i++){//outer loop for batsmen number
        printf("detail of batsmen no %d is :\n",i+1);
        int tr=0;//for total runs
        int noc=0,nof=0;//for number of 50 and 100
        int hr=0,ingr;//for higst run in which inning
   
        for(int j = 0; j < c; j++){
           tr+=arr[i][j];//sum  of total runs
           if( hr<arr[i][j]){//to know highst runs
            hr=arr[i][j];
            ingr = j+1;//innings number in which highst runs
            
           }
           if(arr[i][j]>=100){
             noc++;//count number of centures
           }else
           if(arr[i][j]>=50){
            nof++;//count number of 50
           }
           if(j==c-1){// chack to print details of players
             float ave;
             ave = (float)tr/c;
             printf("total runs is =%d.\n",tr );
             printf("Highest score in inning no(%d) is %d.\n",ingr,hr);
             if(noc > 0){
               printf("number of century is %d.\n",noc);
               }else {
                printf("number of century is 0.\n");
               }
             if(nof > 0){
                printf("number of fifty is %d.\n",nof);
             }else{
              printf("number of fifty is 0.\n");
              }
            printf("average is %.2f\n",ave);
           }
        }
         printf("\n");      
    }//end of 

	
	return 0;
}