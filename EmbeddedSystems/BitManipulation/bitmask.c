#include <stdio.h>

int main() {
    unsigned int number = 7; // Binary: 00000111

    unsigned int shiftAmount = 2;
    unsigned int shifted = number << shiftAmount; // Shifts the bits of 'number' 2 positions to the left

    unsigned int bitmask = (1 << shiftAmount) - 1; // Creates a bitmask with ones in the shifted positions
    unsigned int result = shifted | bitmask; // Performs a bitwise OR between the shifted value and the bitmask

    printf("Result: %u\n", result); // Output: 31 (Binary: 00011111)

    return 0;
}
