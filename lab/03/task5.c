#include <stdio.h>

int main() {
        int n1;
        int s1;
        int n2;
        int s2;
        printf("how many distance cover toword north?");
        scanf("%d",&n1);
        printf("how many distance cover toword south?");
        scanf(" %d",&s1);
        printf("how many distance cover toword north?");
        scanf(" %d",&n2);
        printf("how many distance cover toword south?");
        scanf(" %d",&s2);
        
        int totaldistance=n1+n1+s1+s2;
        printf("total distanc is : %d\n",totaldistance);
        int totalfuel=(n1+n1+s1+s2)*2;
        printf("total fuel is : %d",totalfuel);
        
    return 0;
