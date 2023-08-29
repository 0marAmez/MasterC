#include "stringlib.h"

int main(void){
    char*str = "We think in generalities, but we live in details.";
    char*new_str = substr(str,3,5); // think
    printf("new string:%s\n", new_str);
    char*temp =  "There are two needles in this haystack with needles.";
    unsigned int i = find(temp,"needle");
    printf("index %u \n",i);
    free(new_str);
    return 0; 
}