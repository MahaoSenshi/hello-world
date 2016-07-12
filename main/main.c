//helloWorld.c
#include <stdio.h>
#include <stdlib.h>
#include "pointer.h"

//"Hello World!\n" as a simple output
void simpleOuter() { 
  printf("-------Pointer overview-------\n");
  printf("-------Pointer Describe-------\n");
  GetPointerDescribe();
  printf("-------Simple Example 1-------\n");
  GetSimpleExample();
  printf("-------Simple Example 2-------\n");
  GetSimpleExample2();
}

//startup project
int main () {
  simpleOuter();
  return 0;
}
