
#include <stdio.h>

int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int i,j,k,x=12;
	int totaltriplats=0;
	for (i=0;i<=7;i++){
		for( j=i+1;j<=7;j++){
			for(k=j+1;k<=7;k++){
			    if(arr[i]+arr[j]+arr[k]==x){
			       totaltriplats++;
			       printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
		        }
	        }
		}
	}
	printf("%d",totaltriplats);
	
	return 0;
}
