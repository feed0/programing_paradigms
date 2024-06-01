#include "RightTriangle.h"
#include "../triangle/Triangle.h"

//        CONSTRUCTORS

/** default
 *  hypotenuse = 5.0 * sqrt(2.0)
 *  leg = 5.0
 * @return RightTriangle
 */
RightTriangle::RightTriangle() : Triangle(5.0 * sqrt(2.0), 5.0, 5.0)
{
}

/** from sides
 * @param float side1
 * @param float side2
 * @param float side3
 *
 * @return RightTriangle
 */
RightTriangle::RightTriangle(float side1, float side2, float side3) : Triangle(side1, side2, side3)
{
}

//        DESTRUCTOR
RightTriangle::~RightTriangle() {}

//        METHODS
/**
 * overrides the method in the parent class
 * @return float : area of the triangle
 */
float RightTriangle::area()
{
  float hypotenuse = RightTriangle::hypotenuse();
  float leg = RightTriangle::leg(hypotenuse);
  float leg2;

  if (side1 != hypotenuse && side1 != leg)
    leg2 = side1;
  else if (side2 != hypotenuse && side2 != leg)
    leg2 = side2;
  else if (side3 != hypotenuse && side3 != leg)
    leg2 = side3;

  return leg * leg2 / 2.0;
}

/**
 * checks if the triangle is a right triangle
 */
bool RightTriangle::isRightTriangle()
{
  float s1 = side1 * side1, s2 = side2 * side2, s3 = side3 * side3;

  if (s1 == s2 + s3 ||
      s2 == s1 + s3 ||
      s3 == s1 + s2) // isRight?
    return true;

  return false;
}

/**
 * calculates the hypotenuse of the triangle
 * @return -1.0 if !isRightTriangle
 * @return float : hypotenuse otherwise,
 */
float RightTriangle::hypotenuse()
{

  if (!isRightTriangle())
    return -1.0;

  float hypotenuse;

  if (side1 > side2 && side1 > side3)
    hypotenuse = side1;
  else if (side2 > side3 && side2 > side1)
    hypotenuse = side2;
  else if (side3 > side1 && side3 > side2)
    hypotenuse = side3;

  return hypotenuse;
}

/**
 * returns the leg of the triangle, the smallest in this case
 * @param float hypotenuse
 * @return -1.0 if !isRightTriangle
 * @return float : leg otherwise,
 */
float RightTriangle::leg(float hypotenuse)
{

  if (!isRightTriangle())
    return -1.0;

  float leg;

  if (side1 < side2 && side1 < side3)
    leg = side1;
  else if (side2 < side3 && side2 < side1)
    leg = side2;
  else if (side3 < side1 && side3 < side2)
    leg = side3;

  return leg;
}
