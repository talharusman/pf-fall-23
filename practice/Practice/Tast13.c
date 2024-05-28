#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void solveequation(){
    int n;
    printf("entre how many operater you give: ");
    scanf("%d",&n);
    float num1,num2,Result;
    char op;
    printf("enter number:");
    scanf("%f",&num1);
    bool flage=true;
    for (int i = 0; i < n; i++)
    {
        printf("enter the operater(+,-,*,/): ");
        scanf("%s",&op);

         printf("enter number:");
         scanf("%f",&num2);
         switch (op)
         {
         case '+':
               num1=num1+num2;
            break;
          case '-':
               num1=num1-num2;
            break;
         case '*':
               num1=num1*num2;
            break;  
         case '/':
              if(num2==0){
                printf("error if intger divid by 0 then ans is infinit");
                flage=false;
                break;
              }else
               num1=num1/num2;
            break;
         default:
            break;
         }
        if(!flage){
            break;
        }
    } 

    printf("result is %.1f\n\n",num1);
  return;    
}

void vectorproduct(){
      float A[5],B[5];

      for (int i = 0; i < 5; i++)
      {
        printf("enter the value of A[%d] and B[%d]",i,i);
        scanf("%f%f",&A[i],&B[i]);
      }
      float Result=0;
      for (int i = 0; i < 5; i++)
      {
        Result+=(A[i]*B[i]);
      }
      printf("Result is %f:\n\n",Result);
      
      
    
    return;
}

int main(int argc, char const *argv[])
{
    char choice;
    int i=1;
    while(1){
      printf("a: for vector product\nb: for solve equation\nchose any one : ");
      scanf("%c",&choice);
      switch (choice)
      {
       case 'a':
           vectorproduct();
         break;
       case 'b':
          solveequation();
        break;
    
       default:
          i=0;
        //break;
       }
     if(i==0){
      break;
     }
   }
    return 0;
}
