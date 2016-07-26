#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
int main(int argc, string argv[]){
    if (argc != 2){
        printf("You should enter the value for key or the program will exit\n");
        return 1;
    }
        
    int key = atoi(argv[1]); //get the key and convert it into int from string
    
    if(key > 26){
        key = key % 26;  //0<=key<26.
    }
    //get the plain text
    string str = GetString();
    
    //loop throught the characters of the string
    for(int i = 0; i < strlen(str);i++){
        int result = str[i] + key;
        
        
        if(isupper(str[i]) && (result > 'Z')){
            result = result - 26;
        }
        if(islower(str[i]) && (result > 'z')){
            result = result - 26;
        }
        
        //if the character is alphabetic then print its encrypted form else print as it is.
        if(isalpha(str[i])){
            printf("%c",result);
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}