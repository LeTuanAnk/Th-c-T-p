#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* stringName_character(char *X){
    X[0] = toupper(X[0]);
    for(int i = 1 ; i < strlen(X) ; i ++ ){
        X[i] = tolower(X[i]);
    }
    return X;
}
char* stringName_characters(char *X, char *res){
    char *token = strtok(X, " ");
    while (token != NULL)
    {
        strcat(res, stringName_character(token));
        token = strtok(NULL, " ");
        if(token != NULL){
            strcat(res, " ");
        }
    }
    return res;
}