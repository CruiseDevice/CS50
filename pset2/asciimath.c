#include <stdio.h>
#include <cs50.h>
int main(int argc, string argv[]){
    
    if(argc != 2){
        return 1;//this means no success
    }
    int key = atoi(argv[1]); // convert the character into number
    
    int chr = 'd';
    
    printf("Calculating '%c' + %d",chr,key);
    
    int res = (chr + key);
    
    printf("The ASCII value of %c is %d.\n\n", res, res);
   
    return 0;
}