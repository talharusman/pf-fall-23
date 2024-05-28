#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 
    typedef struct pokemon {//globel declaration 
   	int hp;
   	int speed;
   	int attack;
   	char tier;
   	char name[100];
   }pokemon;

   void change(pokemon* p){
   	//(*p).somthing = p->somthing=>both are same 
   	p -> hp=56;
   	(*p).attack=67;
   	(*p).speed=76;
   	(*p).tier='b';
      return;
   }

int main(int argc, char const *argv[])
{
	pokemon pikachu={23,89,98,'A'}; 
	// pikachu.hp=23;
	// pikachu.speed=89;
	// pikachu.attack=98;
	// pikachu.tier='A';
	//int* -> store address of integer
	pokemon* x= &pikachu;
      printf("%d\n",pikachu.hp);
      printf("%d\n",pikachu.speed);
      printf("%d\n",pikachu.attack);
      printf("%c\n",pikachu.tier);

      change(&pikachu);
      printf("%d\n",pikachu.hp);
      printf("%d\n",pikachu.speed);
      printf("%d\n",pikachu.attack);
      printf("%c\n",pikachu.tier);
    // printf("Address of pikachu.hp -> %p\n", &pikachu.hp);
    // printf("Address of pikachu.speed -> %p\n", (void*)&pikachu.speed);
    // printf("Address of pikachu.attack -> %p\n", (void*)&pikachu.attack);
    // printf("Address of pikachu.tier -> %p\n", (void*)&pikachu.tier);
    // // Printing the address using the pointer
    // printf("Address stored in x -> %p\n", (void*)x);
     // (*x).speed=34;
     // printf("%d",pikachu.speed); 

	return 0;
}