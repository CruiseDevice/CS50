#include <stdio.h>
#include <cs50.h>
int main(void){

	printf("minutes:");
	//scanf("%d",&min);
	int min = GetInt();
	int bottles = 0;
	bottles = 12 * min;
	printf("bottles: %i",bottles);
	return 0;
}	