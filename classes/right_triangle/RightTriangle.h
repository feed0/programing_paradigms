#ifndef RIGHT_TRIANGLE_H // conditional compilation directives.
#define RIGHT_TRIANGLE_H // Prevents header archives from being added various times.

#include <cmath>
#include "../triangle/Triangle.h"

class RightTriangle : public Triangle
{
public:
  // constructor
  RightTriangle();
  RightTriangle(float, float, float);
  ~RightTriangle();

  // methods
  bool isRightTriangle();
  float area();
  float hypotenuse();
  float leg(float);
};

#endif
