#include <stdio.h>
#include <stdlib.h>
#include<string.h>


/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    
    // Assigning the number result_count to be used for loop
    *result_count = queries_count;    
    int *arr = malloc(sizeof(int)*queries_count);
    int k,count = 0;
    
    for(unsigned int i = 0;i<queries_count;i++){
        for(unsigned int j = 0; j<strings_count;j++){
            // checks if strings are equal 
            if(strcmp(queries[i], strings[j]) == 0){
                count++; // increases the count
            }   
        }
        arr[k] = count; // assigns the value to the new array
        k++; // increments index count
        count = 0; // resets count
    }
    
    return arr;
}

int main() {

    // Testing
    char** strings = malloc(4 * sizeof(char*));
    char** queries = malloc(3 * sizeof(char*));

    strings[0] = "aba";
    strings[1] = "baba";
    strings[2] = "aba";
    strings[3] = "xzxb";

    queries[0] = "aba";
    queries[1] = "xzxb";
    queries[2] = "ab";

    int result_count;

    int* arr = matchingStrings(4,strings,3,queries,&result_count);

    for(unsigned int i = 0; i<result_count; i++){
        printf("%d \n",arr[i]);
    }

    free(arr);
    free(queries);
    free(strings);
    
    return 0;
}