#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include <string>

class Square {
private:
  float side;

public:
  Square();
  Square(float);
  Square(char, float);
  ~Square();

  // methods
  bool isSideValid();
  float perimeter();
  float area();
  float diagonal();
  std::string toString();

  // getter
  float getSide();
};

#endif