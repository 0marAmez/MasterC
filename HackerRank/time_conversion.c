#include <stdio.h>
#include <string.h>

char* timeConversion(char* s) {
    //In the context of functions, a static variable is a variable that retains its value between function calls.
    static char output[9];        
    int hour,min,sec;
    char am_or_pm[3];
    
    // sscanf allows you to extract data from a string using a format string in a similar way to how scanf extracts data from standard input.
    sscanf(s,"%d:%d:%d%s",&hour,&min,&sec,am_or_pm);

    // strcmp == 0 if they're equal
    if(strcmp(am_or_pm,"PM")==0){
        if(hour!=12){
            hour+=12;
        }
        //sprintfis used for formatted output, allowing you to construct strings using variables and formatted text. 
        sprintf(output,"%d:%02d:%02d",hour,min,sec);
    }else{
        if(hour==12){
            hour = 0;
        }
        sprintf(output,"%02d:%02d:%02d",hour,min,sec);
    }

    return output; 
}

int main() {
    char*s = "12:45:54PM";
    
    printf("output %s\n",timeConversion(s));

    return 0;
}

/*
Static example:

int counter() {
    static int count = 0; // Initialized only once
    return ++count;
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", counter()); // Outputs 1, 2, 3, 4, 5
    }
    return 0;
}


*/