#ifndef TRIANGLE_H_INCLUDED // conditional compilation directives.
#define TRIANGLE_H_INCLUDED // Prevents header archives from being added various
                            // times.

class Triangle {
private:
  float side1;
  float side2;
  float side3;
  static int quantity;

public:
  Triangle();
  Triangle(float, float, float);
  ~Triangle();

  // methods
  float perimeter();
  float area();

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
