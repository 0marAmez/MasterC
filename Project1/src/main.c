#include "stringlib.h"

int main(void){
    char*str = "Hello my name is Peter Parker";
    String*s =  newString(str);
    printf("Testing String: %s\n",s->str);
    deleteString(&s);
    
    return 0; 
}