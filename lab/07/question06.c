/*
*programmer:talha rusman
*Dase:frequency of number
*Date:10/10/23
*/
#include <stdio.h>

int main(){
	int i,j,n,arr[1000],c;
	 printf("how many input you give?");
	 scanf("%d",&n);
	  for( i = 0 ; i < n ; i++ ){
	  	printf("enter number %d\n",i + 1);
	    scanf("%d",&arr[i]);
	  }
	  for(i=0;i<n;i++){
	  	c=0;
	  	for(j=0;j<n;j++){
	  		if(arr[i]==arr[j]){
	  			c++;	
			  }
		  }
	  	printf("frequency of %d = %d\n",arr[i],c);
	  }
	
	return 0;
}
