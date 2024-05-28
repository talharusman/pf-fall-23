#include <stdio.h>


int main()
{
    int Brightness;

    printf("enter the Brightness:");
    scanf("%d",&Brightness);

    if(Brightness < 0 || Brightness > 1000)
    {
        printf("Error! invalid input:");
    }
    else 
    if(Brightness >= 0 && Brightness < 100)
     {
        printf("Eveninig:");
     }
     else
    if(Brightness >= 100 && Brightness < 500)
     {
        printf("Linghting:");
     }
     else
     if(Brightness >= 500 && Brightness <= 1000)
     {
        printf("Sun Linght:");
     }
     

return 0;
}
