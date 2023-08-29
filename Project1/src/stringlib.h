#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRINGLIB_H
#define STRINGLIB_H


    //Note: size_t -> It is an unsigned integral type.


    /* This function creates a subtring from a given string.
    * function: substr
    * parameter: 
    *   const char*str  -> source string that would be used to created the substring
    *   size_t pos  -> position of the first character to be copied. 
    *   size_t len -> Length of the sub-string. If 0 then it will creat the substr from pos and us the rest of the characters in str.
    * return:
    *   Returns char*sub_str that's dynamically allocated.   
    */
    char* substr(const char*str,size_t pos, size_t len);

    /* This function searches the string for the first occurrence of the substr.
    * function: find
    * parameters: 
    *   const char*str  -> source string with the subject to search for.
    *   const char*sub_str -> substr to be found
    * return:
    *   0 if sub_str not found or position index if found
    */
    size_t find(const char*str, const char* sub_str);

    
    


#endif
