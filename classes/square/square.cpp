#include "square.h"
#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;
Square::Square() { side = 1.0; }
Square::Square(float side) { this->side = side; }
Square::Square(char operation, float num) {
  if (operation == 'p')
    this->side = num / 4;
  else if (operation == 'a')
    this->side = sqrt(num);
  else if (operation == 'd')
    this->side = num / sqrt(2);
  else {
    cout << "Invalid operation" << endl;
    delete this;
  }
}
Square::~Square() {}

// methods
float Square::perimeter() { return side * 4; }
float Square::area() { return side * side; }
float Square::diagonal() { return side * sqrt(2); }
bool Square::isSideValid() {

  if (this->side > 0) {
    return true;
  }

  return false;
}
string Square::toString() {

  ostringstream oss;
  oss << "___SQUARE___" << endl
      << "Side: \t\t" << this->side << endl
      << "Perimeter: \t" << perimeter() << endl
      << "Area: \t\t" << area() << endl
      << "Diagonal: \t" << diagonal() << endl;

  return oss.str();
}

// getter
float Square::getSide() { return side; }