//This is a simple file with small description for a "pointers" functionality

#include <stdio.h>

void GetPointerDescribe() {
    int var = 10;
    int *pnt_var;
    
    //get memory address for "var" variable
    *pnt_var = &var;
    
    printf("The variable 'var' is located at 0x%08x and contains %d.\n", &var, var);
    printf("The pointer 'pnt_var' is located at 0x%08x, contains 0x%08x and points to %d.\n", &pnt_var, pnt_var, *pnt_var);
}

void GetSimpleExample() {
    int int_arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char char_arr[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    
    //create two pointers for this arrays
    int *pnt_int_arr = int_arr;
    char *pnt_char_arr = char_arr;
    
    int i;
    for (i = 0; i < 10; i++) {
        printf("int_arr[%d] contains %d and is located %p;\n", i, *pnt_int_arr, pnt_int_arr);
        pnt_int_arr = pnt_int_arr + 1;
    }
    
    for (i = 0; i < 10; i++) {
        printf("char_arr[%d] contains %c and is located %p;\n", i + 1, *pnt_char_arr, pnt_char_arr);
        pnt_char_arr = pnt_char_arr + 1;
    }
}
