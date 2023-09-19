#include <stdio.h>
 
int swapBits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n){
    // Assuming that x = 28 = 11100, p1 = 0 , p2 = 3  , n = 2

    /* Move all bits of first set to rightmost side */
    
    // x >> p1 = 11100
    // 1U<<n = 00100
    // (1U << n) - 1 = 00100 -1 =  00011
    // set1 =  11100 AND 00011 = 00000
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);
 
    /* Move all bits of second set to rightmost side */

    // x >> p2 = 00011
    // 1U<<n = 00100
    // (1U << n) - 1 = 00100 -1 =  00011
    // set2 =  00011 AND 00011 = 00011
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);
 
    /* XOR the two sets */
    // XOR = 00000 XOR 00011 = 00011
    unsigned int xor = (set1 ^ set2);
 
    /* Put the xor bits back to their original positions */
    // xor << p1 = 00011
    // xor << p2 = 11000
    // xor = 00011 OR 11000 = 11011

    xor = (xor << p1) | (xor << p2);
 
    /* XOR the 'xor' with the original number so that the
       two sets are swapped */

    unsigned int result = x ^ xor; // 11100 XOR 11011  = 00111
 
    return result;
}
 
/* Driver program to test above function*/
int main()
{
    int res = swapBits(28, 0, 3, 2);
    printf("\nResult = %d \n", res);
    return 0;
}

// Input:
// x = 28 (11100)
// p1 = 0 (Start from first bit from right side)
// p2 = 3 (Start from 4th bit from right side)
// n = 2 (No of bits to be swapped)
// Output:
// 7 (00111)
// The 2 bits starting from 0th position (from right side) are
// swapped with 2 bits starting from 4th position (from right side)

// n = 4

// Step 1: (1U << n)
//     1U << 4
//     Binary representation: 0001 << 4
//     Result: 00010000 (16 in decimal)

// Step 2: ((1U << n) - 1)
//     (1U << 4) - 1
//     00010000 - 1
//     Binary representation: 00010000 - 00000001
//     Result: 00001111 (15 in decimal)
