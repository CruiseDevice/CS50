#include <stdio.h>
#include <cs50.h>
int getNumberLength(int number);
int main(void){
    
    long long number;
    number = GetLongLong();
    int numberLength = getNumberLength(number);
    //printf("%i\n",numberLength);
    if(numberLength < 13 || numberLength > 16){
        printf("INVALID\n");
    }
    return 0;
}
//return length of number correctly
int getNumberLength(int number){
    int count = 0;
    while(number !=0){
        number /= 10;
        count ++;
    }
    return count;
}
