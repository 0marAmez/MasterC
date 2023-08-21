#include "stringlib.h"

// Constructor
String* newString(const char*str){
    String* mystr = (String*)malloc(sizeof(String));
    mystr->str = (char*)malloc(strlen(str)+1); // +1 for the null-terminator
    strcpy(mystr->str,str);
    mystr->length = strlen(str);
    return mystr;
        
}
// Substring method, given the started index and the amount of characters will return a substring
String* substr(int i, int n){
    return NULL;
}
// Destructor
 void  deleteString(String**str){
    if(str != NULL && *str != NULL){ // Checks if the double pointer and the pointed-to object are not NULL
        free((*str)->str); // Frees the char*
        free(*str);   // Frees the String Structure
        *str = NULL; // Set the pointer to NULL after freeing memory
    }
 }
   