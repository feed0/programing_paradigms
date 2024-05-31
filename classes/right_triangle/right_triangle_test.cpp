#include <iostream>
#include <stdio.h>

#include "RightTriangle.h"

// compile code:
// g++ main.cpp RightTriangle.cpp ../triangle/Triangle.cpp -o rt_test
// ./rt_test

using namespace std;
int main()
{
  RightTriangle *t1;
  t1 = new RightTriangle();
  cout << "CREATED" << endl;
  delete t1;

  return 0;
}
