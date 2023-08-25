#include "stringlib.h"

// Substring method, given the started index and the amount of characters will return a substring
char* substr(const char*str,int index, int n){
// ERROR CHECKING:
    // Checks if the string is Null before the operation
    if(str == NULL){
        perror("**ERROR:Null pointer, invalid operation.");
        exit(EXIT_FAILURE);
    }
    if(n>strlen(str)){
        perror("**ERROR:n is higher than the size of 'str.'");
        exit(EXIT_FAILURE);
    }

    
    /*
        substr_size =  the size of the new string
        last_index = the last index where the loop will stop looping in str
    */
    int substr_size,last_index;
    // check if you want to create of substr of n-size or strlen(str)-index size
    if(n==0){
        substr_size = strlen(str)-index;
        last_index = strlen(str);
    }else{
        substr_size = n;
        last_index = index+n;
    }
    printf("n_characters: %d \n",substr_size);
    
    // substring to be rerturn
    char*sub_str = (char*)malloc(substr_size+1);
    // integer to loop through new sub_string created
    int j = 0;
    // loop used to loop through the characters of str to create a new stringS
    for(int i = index; i<last_index; i++){
        sub_str[j++] = str[i]; 
    }
    // Null terminator
    sub_str [substr_size] = '\0';
    // printf("%s\n",sub_str);
    return sub_str;
}