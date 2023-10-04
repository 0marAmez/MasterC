#include "stringlib.h"

int main(void){
    // char*str = "We think in generalities, but we live in details.";
    char *str = "   This is a string with leading and trailing spaces   ";
    char*temp = str_trim(str);
    printf("Reverse string:%s\n",temp);
    // printf("Hello ocurrance count: %d\n",str_count(str,"hello"));
    // char*new_str = substr(str,3,5); // think
    // printf("new string:%s\n", new_str);
    // char*temp =  "There are two needles in this haystack with needles.";
    // unsigned int i = find(temp,"needle");

    // char* find_test = substr(temp,i,6);

    // printf("index %u \n",i);
    // printf("new str: %s \n",find_test);


    // // char* upper = "NOW IS NOT THE TIME TO QUIT";
    // char* lower = "can you help make all of this uppercase";

    // printf("Before upper: %s \n",lower);
    // char*test = str_upper(lower);
    // printf("After upper: %s \n",test);
    // char*test2 = str_lower(test);

    // // printf("Before lower: %s \n",upper);
    // // str_lower(lower);
    // printf("After lower: %s \n",test2);

    // char* pi = "3.14159"; 
    // int pi_n = str_to_int(pi);
    // printf("pi: %d\n",pi_n);
    // free(new_str);
    return 0; 
}