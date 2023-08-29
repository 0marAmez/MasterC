#include <stdio.h>
#include <stdlib.h>


void plusMinus(int arr_count, int* arr) {
    double negative_numbers = 0.0;
    double positive_numbers = 0.0;
    double zeroes           = 0.0;
    
    for(int i = 0; i<arr_count ; i++){
        if(arr[i]<0){
            negative_numbers+=1.0;
        }else if(arr[i]>0){
            positive_numbers+=1.0;
        }else{
            zeroes+=1.0;
        }
    }

 
    printf("%f\n",positive_numbers/arr_count);
    printf("%f\n",negative_numbers/arr_count);
    printf("%f\n",zeroes/arr_count);


}

int main() {
    // No need to cast with (int*)
    int*arr = malloc(sizeof(int)*5);
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 0;
    arr[3] = -1;
    arr[4] = -1;

    plusMinus(5,arr);
    printf("\n");

    return 0;
}

