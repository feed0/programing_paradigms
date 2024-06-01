#include "Triangle.h"
#include <math.h>

Triangle::Triangle()
{
  side1 = 3.0;
  side2 = 4.0;
  side3 = 5.0;
}

Triangle::Triangle(float side1, float side2, float side3)
{
  this->side1 = side1;
  this->side2 = side2;
  this->side3 = side3;
}

Triangle::~Triangle()
{
  // destructed
}

// methods
float Triangle::area()
{
  float sp = (side1 + side2 + side3) / 2;
  return sqrt(sp * (sp - side1) * (sp - side2) * (sp - side3));
}

float Triangle::perimeter()
{
  return side1 + side2 + side3;
}

float Triangle::isTriangle()
{
  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    return true;
  else
    return false;
}

// getter
float Triangle::getSide1() { return side1; }
float Triangle::getSide2() { return side2; }
float Triangle::getSide3() { return side3; }

// setter
void Triangle::setSide1(float side1) { this->side1 = side1; }
void Triangle::setSide2(float side2) { this->side2 = side2; }
void Triangle::setSide3(float side3) { this->side3 = side3; }
