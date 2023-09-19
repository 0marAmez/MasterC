int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    
    int diagonal_1 = 0;
    int diagonal_2 = 0;
    for(int i = 0;i<arr_rows;i++){
        diagonal_1 += arr[i][i]+arr[(arr_rows-1)-i][(arr_columns-1)-i];
        diagonal_2 += arr[i][(arr_columns-1)-i]+arr[(arr_rows-1)-i][i];
        // printf("%d\n",diagonal_1);
        if(i+1 == (arr_rows-1)-(i+1)){
            diagonal_1+=arr[i+1][i+1];
            diagonal_2+=arr[i+1][i+1];
            break;                                                                  
        }
        if(i+1>(arr_rows-1)-(i+1)){
            break;
        }
    }
    
    // printf("Diagonal 1: %d\n",diagonal_1);
    // printf("Diagonal 2: %d\n",diagonal_2);

    return abs(diagonal_1-diagonal_2);

}