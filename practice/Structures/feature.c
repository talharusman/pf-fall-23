#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    typedef struct pokemon
   {
   	int hp;
   	int speed;
   	int attack;
   	char tier;
   	char name[30];
   	
   }pokemon;
   pokemon a,b,c;
   a.attack=100;
   a.hp = 1000;
   a.speed = 90;
   a.tier = 'A';
   strcpy(a.name,"Blastoise");

   // b.attack=a.attack;
   // b.hp=a.hp;
   // b.speed=a.speed;
   // b.tier=a.tier;
   // strcpy(b.name,a.name);
  b=a;
   printf("%d",b.attack);



	return 0;
}