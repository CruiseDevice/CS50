#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
void initials(string name){
    //print the first character in uppercase
    printf("%c",toupper(name[0]));
    
    //printf("%ld",strlen(name));
    //loop through rest of the character
    for(int i = 0; i < strlen(name);i++){
        //search for space and end of character
            if(name[i] == ' ' && name[i + 1] != '\0'){
                printf("%c",toupper(name[i+1]));
            }
    }
    printf("\n");
    
}
int main(int argc,string argv[]){
    
    //get the string
    string name = GetString();
    initials(name);
    
    return 0;
}