#include<stdio.h>

int main(int argc, char const *argv[])
{
	struct pokemon{// user define data type
		int helth;
		int speed;
		int attack;
		char tier;//S,A,B,C,D
	} pikasho, charizad;
	//struct pokemon pikasho;
	//pikasho.attack=60;
	printf("enter the attack of pikasho:");
	scanf("%d",&pikasho.attack);
	pikasho.speed= 100;
	pikasho.helth=50;
	pikasho.tier='A';

	//struct pokemon charizad;
	charizad.speed=80;
	charizad.attack=130;
	charizad.helth=80;
	charizad.tier='B';

	printf("%f\n",pikasho.attack );

	return 0;
}