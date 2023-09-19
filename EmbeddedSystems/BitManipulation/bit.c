#include <stdio.h>

int main() {
    unsigned int number1 = 7; // Binary: 00000111

    unsigned int result1 = number1 << 2; // Shifts the bits of 'number' 2 positions to the left

    printf("Result: %u\n", result1); // Output: 28 (Binary: 00011100)

    int number2 = -16; // Binary: 11110000

    int result2 = number2 >> 3; // Shifts the bits of 'number' 3 positions to the right

    printf("Result: %d\n", result2); // Output: -2 (Binary: 11111110)

    return 0;
}
