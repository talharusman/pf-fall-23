//structures are pass by valude
#include <stdio.h>
  //by globel declaration we can use it outside and inside of main function
	typedef struct pokemon {//globel declaration 
   	int hp;
   	int speed;
   	int attack;
   	char tier;
   	char name[100];
   }pokemon;
void fun(pokemon p){
	printf("%d\n",p.hp );
	return;
}
void change(pokemon p){
	p.hp=78;
	p.attack=34;
	p.speed=34;


}

int main(int argc, char const *argv[])
{  
   pokemon pikachu;
   pikachu.hp=56;
   pikachu.attack=60;
   pikachu.speed=60;
   change(pikachu);//it is pass by value
   printf("%d\n",pikachu.hp);
   printf("%d\n",pikachu.attack );
   printf("%d\n",pikachu.speed );
   fun(pikachu);
   
	return 0;
}