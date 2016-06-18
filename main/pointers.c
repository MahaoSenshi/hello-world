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
