#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libraryNameEmail.h"
#include <stdlib.h>

int main(){
    char Name[100] = "";
    scanf("%99[^\n]", Name);
    char Result[100] = ""; 
    printf("Ten sau khi chuan hoa: ");
    char *processedName = stringName_characters(Name,Result);
    printf("%s\n",processedName);

}