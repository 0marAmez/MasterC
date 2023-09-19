#include <stdio.h>

void printBits(unsigned int num){
    unsigned int bitMask = 1<<31;
    printf("Value: %u = ",num);
    for(unsigned int i = 1; i<=32; i++){
        printf("%c",(num&bitMask? '1':'0'));
        num = num<<1;
        if(i%8 == 0){
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    unsigned int num = 10;
    unsigned int mask = 2;

    printBits(num);
    printBits(mask);
    printBits(num&mask);




    return 0;
}