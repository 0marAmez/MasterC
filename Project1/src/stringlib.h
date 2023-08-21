#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRINGLIB_H
#define STRINGLIB_H

    typedef struct String String;
    struct String{
        char*str;
        int length;   
    };
    // Constructor
    String* newString(const char*str);
    // Substring method, given the started index and the amount of characters will return a substring
    String* substr(int i, int n);
    // Destructor
    void    deleteString(String**str);
    
    


#endif // MACRO
