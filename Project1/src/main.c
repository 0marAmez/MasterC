#include "stringlib.h"

int main(void){
    char*str = "We think in generalities, but we live in details.";
    char*new_str = substr(str,3,5); // think
    printf("new string:%s\n", new_str);
    char*temp =  "There are two needles in this haystack with needles.";
    unsigned int i = find(temp,"needle");

    char* find_test = substr(temp,i,6);

    printf("index %u \n",i);
    printf("new str: %s \n",find_test);


    // char* upper = "NOW IS NOT THE TIME TO QUIT";
    char* lower = "can you help make all of this uppercase";

    printf("Before upper: %s \n",lower);
    str_upper(lower);
    printf("After upper: %s \n",lower);
    // printf("Before lower: %s \n",upper);
    // str_lower(lower);
    // printf("After lower: %s \n",upper);

    free(new_str);
    return 0; 
}