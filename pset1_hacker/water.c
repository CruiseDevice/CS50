#include <stdio.h>
#include <cs50.h>
int getMinutes(void);
int numberOfBottles(int minutes);
int main(void){
   int minutes = getMinutes();
   printf("%i\n",numberOfBottles(minutes));
   return 0;
}
int getMinutes(void){
    int minutes = 0;
    while(minutes <= 0){
        printf("minutes: ");
        minutes = GetInt();
    }
    return minutes;
}
int numberOfBottles(int minutes){
   int bottles = 0;
   bottles = minutes * 12;
   return bottles;
}