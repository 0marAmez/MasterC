int* countingSort(int arr_count, int* arr, int* result_count) {
    
    *result_count = 100;  
    int* frequency_arr = malloc(sizeof(int)*100);
    memset(frequency_arr, 0, 100 * sizeof(int));
    for(unsigned int i = 0; i<arr_count;i++){
        frequency_arr[arr[i]]++;
    }
    return frequency_arr;
}