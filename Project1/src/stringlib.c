#include "stringlib.h"


// This function creates a subtring from a given string.
char* substr(const char*str,size_t pos, size_t len){
    // If the string is NULL then the function will return null.
    if(str == NULL){
        fprintf(stderr, "**ERROR: Invalid argument: NULL pointer.\n");
        return NULL;
    }
    // If the pos+len exceeds the bounds of the given string then it will return null.
    if((pos+len)>strlen(str)){
        fprintf(stderr, "**ERROR: Substring indices are out of bounds.\n");
        return NULL;
    }
    if(strlen(str) == 1){
        fprintf(stderr, "**ERROR: String is only one character long.\n");
        return NULL;
    }
    int unsigned n; // last index of the substr in str
    int unsigned substr_len; // length of the substr
    // if the user does not specify the length of substr it will use the rest of the characters to create the substr
    if(len == 0){
        substr_len = strlen(str)-pos;
        n = strlen(str);
    }else{
        substr_len = len;
        n = pos+len;
    }
    /*
    sub_string to be rutrned:

    In the example provided earlier, the use of a cast (char *) 
    is necessary when calling the malloc function for memory allocation. 
    This is because malloc returns a void * (void pointer), which is a generic 
    pointer type that can point to any type of memory.
    */
    char*sub_str = (char*)malloc(substr_len+1);
    unsigned int k = 0; // interator for sub_str
    // Loop to copy characters into the new sub_str
    for(unsigned int i = pos; i<n ; i++){
            sub_str[k] = str[i];
            k++;
    }
    // Null terminator
    sub_str[substr_len] = '\0';
    return sub_str;
}

// This function searches the string for the first occurrence of the substr.
size_t find(const char*str, const char* sub_str){
    // Check if the strings are empty or not
    if(str == NULL || sub_str == NULL){
        fprintf(stderr, "**ERROR: Invalid argument: NULL pointer.\n");
        return -1;
    }
   
    unsigned int str_n = strlen(str);  // size of the str
    unsigned int sub_str_n = strlen(sub_str); // size of the substring

    // Check for the size of the strings to validate arguments
    if(str_n == 0 || sub_str_n == 0){
        fprintf(stderr, "**ERROR: Invalid argument: one of the strings is empty.\n");
        return -1;
    }
    size_t pos = 0;
    // Loop throught th string
    for(unsigned int i = 0; i<str_n; i++){
        // Check if the characters match with the substr characters
        if(str[i] == sub_str[pos]){
            pos++;
            if(pos == sub_str_n){ // if the length is the same then we return the starting index
                return i-pos+1;
            }

        }else{
            pos = 0;
        }
    }
    return -1;
}

// This function converts all the characters in a string to uppercase
char* str_upper(const char *str){
    // Check if string is NULL
    if(str == NULL){
        fprintf(stderr, "**ERROR: Invalid argument: NULL pointer.\n");
        return NULL;
    }
    // Check if the length of string is empty
    if(strlen(str)==0){
        fprintf(stderr, "**ERROR: Invalid argument: string is empty.\n");
        return NULL;
    }
    // allocates memory for the string
    char*upper = (char*)malloc(strlen(str)+1);
    for(unsigned int i = 0;i<strlen(str);i++){
        if(isalpha(str[i])==0){ // Ignores spaces,commans and any other special characters
            upper[i] = str[i];
        }else{
            upper[i] = toupper(str[i]); // Makes characters to uppercase
        }
    }
    upper[strlen(str)] = '\0';// null terminator

    return upper;
}

// This function converts all the characters in a string to lowercase
char* str_lower(const char *str){
    // Check if string is NULL
    if(str == NULL){
        fprintf(stderr, "**ERROR: Invalid argument: NULL pointer.\n");
        return NULL;
    }
    // Check if the length of string is empty
    if(strlen(str)==0){
        fprintf(stderr, "**ERROR: Invalid argument: string is empty.\n");
        return NULL;
    }
    // allocates memory for the string
    char*lower = (char*)malloc(strlen(str)+1);
    for(unsigned int i = 0;i<strlen(str);i++){
        if(isalpha(str[i])==0){ // Ignores spaces,commans and any other special characters
            lower[i] = str[i];
        }else{
            lower[i] = tolower(str[i]); // Makes characters to uppercase
        }
    }
    lower[strlen(str)] = '\0';// null terminator

    return lower;
}