#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRINGLIB_H
#define STRINGLIB_H



    /* This function creates a subtring of another string.
    * function: substr
    * parameter: char str.int i the index where you want the substring to begin, int n the amount of characters that you want use for the new string 
    * return: char*, it returns a char* pointer that used memory allocation
    */
    char* substr(const char*str,int i, int n);

    
    


#endif
