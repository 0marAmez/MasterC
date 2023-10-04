char* pangrams(char* s) {
    // Creates array of integers to keep track of the alphabet letters
    int* ocurrance = (int*)malloc(sizeof(int)*26);
    // zero out the array
    memset(ocurrance, 0, 26);
    // stores the length of the string
    unsigned len = strlen(s);
    // keeps track of the letter that have appear 
    int total = 0;
    // use to check its ascii val
    int ascii_val;
    
    for(unsigned int i = 0;i<len;i++){
        if(isalpha(s[i])){ // checks if is a letter
            ascii_val = (int)s[i]; // converts to integer values
            if(ascii_val>90){ // checks if it's lower case
                ascii_val = ascii_val-97;
            }else{ // upper case
                ascii_val = ascii_val-65;
            }
            if (ocurrance[ascii_val] == 0) {
                ocurrance[ascii_val]++; // increments the values of the array
                total++; // increases the count
            }
        }
    }
    if(total == 26){
        return "pangram";
    }else{
        return "not pangram";
    }    

}