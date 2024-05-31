#include "Triangle.h" // call T.header
#include <iostream>   // IO based on streams
#include <stdio.h>    // default header

using namespace std; // allows naming objects and variables from the standard
                     // library

float *inputSides();
void printTriangle(Triangle *t);
Triangle *tris; // allocates memory

int main()
{

  // Alternative 1
  tris = new Triangle(); // first constructor
  printTriangle(tris);   // print the triangle
  delete tris;           // deallocate memory

  // Alternative 2
  float *sides = inputSides();
  tris = new Triangle(sides[0], sides[1], sides[2]); // second constructor
  printTriangle(tris);                               // print the triangle
  delete tris;                                       // deallocate memory

  cout << "Bye!" << endl;
  return 0;
}

/**
 * Input via keyboard
 * @return float*
 */
float *inputSides()
{

  float *sides = new float[3];

  cout << "Side 1: ";
  cin >> sides[0];
  // scanf("%f", &sides[0]);

  cout << "Side 2:";
  cin >> sides[1];
  // scanf("%f", &sides[1]);

  cout << "Side 3:";
  cin >> sides[2];
  // scanf("%f", &sides[2]);

  return sides;
}

/**
 * Print the triangle data
 * @param Triangle* t
 */
void printTriangle(Triangle *t)
{

  if (t == NULL)
  {
    cout << "ERROR: Triangle is NULL" << endl;
    return;
  }

  cout << "___TRIANGLE___" << endl;
  cout << "Side 1: " << t->getSide1() << endl;
  cout << "Side 2: " << t->getSide2() << endl;
  cout << "Side 3: " << t->getSide3() << endl;
  cout << endl;

  cout << "Perimeter: " << t->perimeter() << endl;
  cout << "Area: " << t->area() << endl;
  cout << "_____________" << endl;

  cout << endl;
}