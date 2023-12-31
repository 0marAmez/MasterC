#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


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
    *   -1 if sub_str not found or position index if found
    */
    size_t find(const char*str, const char* sub_str);

    /* This function count the number of occurrences of a substring in a given string.
    * function: count
    * parameters: 
    *   const char*str  -> source string with the subject to search for.
    *   const char*sub_str -> substr to be found
    * return:
    *   -1 if sub_str not found or frequency found in str
    */
    int str_count(const char *str, const char *sub_str);

    char *str_replace(const char *str, const char *old_substring, const char *new_substring); // COMPLETE

    /* This function  reverse the characters in a string.
    * function: str_reverse
    * parameters: 
    *   const char*str  -> source string with the subject to search for.
    * return:
    *   return NULL if str is empty otherwise reverse the string
    */
    char *str_reverse(const char *str);

    /* This function Remove leading and trailing whitespace characters from a string.
    * function: str_trim
    * parameters: 
    *   const char*str  -> source string with the subject to search for.
    * return:
    *   return NULL if str is empty otherwise trimmed string
    */
    char *str_trim(const char *str);

    /* This function Convert a string to uppercase
    * function: str_upper
    * parameters: 
    *   char**str  ->  a pointer to a pointer to a character( the address of the char*).
    *   
    * return:
    *   the same string with all the letters all uppercase
    */
    char* str_upper(const char *str);

    /* This function Convert a string to lowercase
    * function: str_lower
    * parameters: 
    *   char**str  ->  a pointer to a pointer to a character( the address of the char*).
    *   
    * return:
    *   the same string with all the letters all lowercase
    */
    char* str_lower(const char *str);

    int str_starts_with(const char *str, const char *substring);
    
    int str_ends_with(const char *str, const char *substring);

    char *str_remove_duplicates(const char *str);

    char **str_split(const char *str, const char *delimiter, int *num_tokens);

    /* This function Convert a string to an integer
    * function: str_to_int
    * parameters: 
    *   char**str  ->  a pointer to a pointer to a character( the address of the char*).
    *   
    * return:
    *   integer with the value from the string
    */
    int str_to_int(const char *str);
    
    /* This function Convert a string to a double
    * function: str_to_double
    * parameters: 
    *   char**str  ->  a pointer to a pointer to a character( the address of the char*).
    *   
    * return:
    *   double with the value from the string
    */
    double str_to_double(const char *str);


#endif
