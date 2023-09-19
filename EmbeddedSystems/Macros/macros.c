#include <stdio.h>
#define SWAP_INT(A, B) A = A^B; B = A^B; A = A^B;

#define LIST    10, \
                20, \
                30     

#define MAX(A, B) (((A) > (B)) ? (A) : (B))

#define SWAP_ANY(x,y,T) \
    do { \
    T temp = (*x);\
    (*x) = (*y); \
    (*y) = temp; \
}while(0);

#define CUSTOM_MACRO(x, y) x##y //The Concatenation operator is indicated by the usage of ##. It is used in macros to perform concatenation of the arguments in the macro. We need to keep note that only the arguments are concatenated, not the values of those arguments.

#define PRINT_VAL(X) printf(#X " is %d at address %p.\n", X, &X);

#define PRODUCT(X,Y) (X)*(Y)

int main( int argc, char *argv[] )  {
    // SWAP INT
    int a = 3, b = 8;
    printf("Before swap: a = %d and b = %d \n",a,b);
    SWAP_INT(a,b);
    printf("After swap: a = %d and b = %d \n",a,b);


    //Initialized array
    int arr[] = { LIST };
    
    printf("arr[0] = %d\n",arr[0]);
    printf("arr[1] = %d\n",arr[1]);
    printf("arr[2] = %d\n",arr[2]);

    a = 10;
    b = 20;
    
    //check max value
    int ret = MAX(a,b);
 
    printf("Max value %d\n", ret);


    //

    int c = 5;
    int d = 9;
    char* str1 = "hello!";
    char* str2 = "bye!";
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    //Swap the number
    SWAP_ANY(&str1,&str2,char*);
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);


    int xValue = 20;
    printf("%d\n", CUSTOM_MACRO(x, Value)); 
    int wow = 5;

    int val = 7;
    PRINT_VAL(val);

    printf("Product: %d\n",PRODUCT(7,2));
}