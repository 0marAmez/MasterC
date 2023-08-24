#include "stringlib.h"

int main(void){
    char*str = "Hello my name is Peter Parker";
    char*new_str = substr(str,1,7);
    printf("new string: %s\n", new_str);
    return 0; 
}