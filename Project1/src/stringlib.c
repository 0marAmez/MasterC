#include "stringlib.h"

// Substring method, given the started index and the amount of characters will return a substring
char* substr(const char*str,int i, int n){
    // Checks if the string is Null before the operation
    if(str == NULL){
        return NULL;
    }
    // amount of character to be utilized in the new string
    int n_characters = i+n;
    // printf("n_characters: %d \n",n_characters);
    
    // substring to be rerturn
    char*sub_str = (char*)malloc(n_characters);
    // integer to loop through new string
    int k = 0;
    for(int j = i; j<n_characters; j++){
        sub_str[k++] = str[j]; 
    }
    sub_str [n_characters] = '\0';
    return sub_str;
}

   