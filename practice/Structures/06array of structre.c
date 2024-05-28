#include<stdio.h>

int main(int argc, char const *argv[])
{
  typedef struct pokemon
   {
   	int hp;
   	int speed;
   	int attack;
   	char tier;
   	
   }pokemon;

   pokemon arr[3];//3 pokemon
   arr[0].hp=50;
   arr[0].speed=500;
   arr[0].attack=45;
   arr[0].tier='A';

   arr[1].hp=50;
   arr[1].speed=70;
   arr[1].attack=67;
   arr[1].tier='B';

   arr[2].hp=55;
   arr[2].speed=50;
   arr[2].attack=43;
   arr[2].tier='C';
    for(int i=0;i<3;i++){
    	printf("hp :%d\n",arr[i].hp );
    	printf("speed :%d\n",arr[i].speed );
    	printf("attack :%d\n",arr[i].attack);
    	printf("tier :%c\n",arr[i].tier );
    	printf("\n");

    }


	return 0;
}