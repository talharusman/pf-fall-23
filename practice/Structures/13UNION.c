#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 
    typedef union pokemon {//globel declaration 
   	int hp;
   	int speed;
   	int attack;
   	char tier;
   	char name[100];
   }pokemon;

int main(int argc, char const *argv[])
{
	pokemon pikachu; 
	pikachu.hp=23;
	pikachu.speed=89;
	pikachu.tier='A';
	pikachu.attack=98;
	//int* -> store address of integer
	pokemon* x= &pikachu;
      printf("%d\n",pikachu.hp);
      printf("%d\n",pikachu.speed);
      printf("%d\n",pikachu.attack);
      printf("%c\n",pikachu.tier);

	return 0;
}