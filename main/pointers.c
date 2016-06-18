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

//modified pointers
void GetSimpleExample() {
    int int_arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char char_arr[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    
    //create one pointer with type void
    void *pnt_void;
    
    int i;
    pnt_void = (void *) int_arr;
    for (i = 0; i < 10; i++) {
        printf("int_arr[%d] contains %d and is located %p;\n", i, *((int *)pnt_void), pnt_void);
        pnt_void = (void *)((int *)pnt_void + 1);
    }
    
    pnt_void = (void *) char_arr;
    for (i = 0; i < 10; i++) {
        printf("char_arr[%d] contains %c and is located %p;\n", i, *((char *)pnt_void), pnt_void);
        pnt_void = (void *)((char *)pnt_void + 1);
    }
}
