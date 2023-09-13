long flippingBits(long n) {
    
    // unsigned long mask = 0xFFFFFFFF;   instead of max
    unsigned long temp = (unsigned long) n;
    unsigned long max = 4294967295;
    unsigned long output = temp^max;
    
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