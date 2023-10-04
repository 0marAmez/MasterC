long flippingBits(long n) {
    
    // unsigned long mask = 0xFFFFFFFF;   instead of max
    unsigned long temp = (unsigned long) n; // treats the long int as an unsigned long
    unsigned long max = 4294967295; // set all the bits to 1
    unsigned long output = temp^max; //  performs an XOR operation to flip the bits
    
    return output;
}


/*
ALTERNATIVE
long flippingBits(long n) {
    unsigned long temp = (unsigned long)n;
    unsigned long output = ~temp;
    return (long)output;
}

*/