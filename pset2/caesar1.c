#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[]){
    
    bool keySuccess = false;
    int key;
    do{
        if(argc != 2){
            return 1;
        }else{
            key = atoi(argv[1]);
            keySuccess = true;
        }
    }while(keySuccess != true);
    string str = GetString();
    for(int i = 0; i < strlen(str);i++){
        if(isalpha(str[i])){
            if(islower(str[i])){
                 printf("%c", ((((str[i] - 97)+key)%26)+97));
            }
            if(isupper(str[i])){
                printf("%c", ((((str[i] - 65)+key)%26)+65));
            }
        }else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}