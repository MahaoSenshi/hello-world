//helloWorld.c

#include <iostream>
#include "pointer.h"

using namespace std;

//"Hello World!\n" as a simple output
void simpleOuter() { 
  cout << "-------Pointer overview-------"\n; 
  cout << "-------Pointer Describe-------\n";
  GetPointerDescribe();
  cout << "-------Simple Example 1-------\n";
  GetSimpleExample();
  cout << "-------Simple Example 2-------\n";
  GetSimpleExample2();
}

//startup project
main () {
  simpleOuter();
  return 0;
}
