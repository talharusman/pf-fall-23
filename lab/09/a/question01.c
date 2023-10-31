#include <stdio.h>

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b =temp;
}

int main(){
	int j =2 ,k=5;
	printf("k = %d, j = %d\n",k,j);
	swap(&k,&j);
	printf("k = %d, j = %d",k,j);
	return 0;
}//befor fixing this code we are passing the value in swap function that's why after swap the k and j  print the same value of j and k
