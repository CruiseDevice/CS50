#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void){
	float change;
	int cent, quarter, dime, left, coins, nickel = 0;
	do{
		printf("O hai! How much change is owned?\n");
		//scanf("%f",&change);
		change = GetFloat();
	}while(change <= 0);

	cent = (int)round(change * 100);

	quarter = cent / 25;
	left = cent % 25;

	dime = left / 10;
	left = left % 10;

	nickel = left / 5;
	left = left % 5;

	coins = quarter + dime + nickel + left;

	printf("%d\n",coins);
	return 0;
}