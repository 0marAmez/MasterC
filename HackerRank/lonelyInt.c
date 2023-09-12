int lonelyinteger(int a_count, int* a) {
    // Checks if the size of the array is 1 to return the only element of the array
    if(a_count==1){
        return a[0];
    }
    // due 0 <= a[i] <=100 to used to check if values is in the array
    int arr[101] = {0};
    
    // used to save the value of the unique number
    int unique;
    arr[a[0]]++;
    for(unsigned int i = 1 ; i<a_count; i++){
        printf("Number: %d\n",a[i]);
        arr[a[i]]++;
    }
    for(unsigned int j = 0; j<a_count;j++){
        if(arr[a[j]]==1){
            unique = a[j];
        }
    }
    
    return unique;
}