#ifndef TRIANGLE_H // conditional compilation directives.
#define TRIANGLE_H // Prevents header archives from being added various times.

class Triangle
{
protected:
  float side1;
  float side2;
  float side3;
  static int quantity;

public:
  // constructor
  Triangle();
  Triangle(float, float, float);
  ~Triangle();

  // methods
  float area();
  float perimeter();
  float isTriangle();

  // getter
  float getSide1();
  float getSide2();
  float getSide3();
  static int getQuantity();

  // setter
  void setSide1(float);
  void setSide2(float);
  void setSide3(float);
  static void setQuantity();
};

#endif
