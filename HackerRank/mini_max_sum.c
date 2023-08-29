#include <stdio.h>
#include <stdlib.h>


void miniMaxSum(int arr_count, int* arr) {
    long  int total = 0;
    int temp = 0;
    for(int i=0 ;i<arr_count;i++){
        total+=arr[i];
        for(int j=i+1;j<=arr_count-1;j++){
            if(arr[i]>arr[j]){
                total-=arr[i];
                total+=arr[j];
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }
    long int min = total-arr[arr_count-1];
    long int max = total-arr[0];
    printf("%ld %ld",min,max);
}

int main() {
    // No need to cast with (int*)
    int*arr = malloc(sizeof(int)*5);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    // int*ptr = &arr;
    printf("MIN MAX: \n");
    miniMaxSum(5,arr);
    printf("\n");

    return 0;
}

/*
Casting Example:
The function you've provided, node_create, creates and initializes a node for a binary tree data structure. 
The reason for casting (Node *) when allocating memory using malloc is likely due to the usage of a specific type of structure 
named Node.

Node *n = (Node *) malloc(sizeof(Node));


*/