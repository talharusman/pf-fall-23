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
   	char name[100];
   }pokemon;
   typedef struct lagendarypokemon
   {
   	pokemon normal;
   	char ability[10];
   }lagendarypokemon;

   lagendarypokemon mewtwo;
   strcpy(mewtwo.ability,"pressure");
   mewtwo.normal.hp=150;
   mewtwo.normal.speed=230;
   mewtwo.normal.attack=180;
   mewtwo.normal.tier='A';
   strcpy(mewtwo.normal.name,"talhd"); 
	return 0;
}