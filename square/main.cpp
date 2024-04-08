#include "square.h"
#include <iostream>
#include <stdio.h>

using namespace std;

float reader(char);

int main() {

  // Square with side 1
  Square *square1 = new Square();
  cout << square1->toString() << endl;

  // Square with inputed side
  float side = reader('s');
  Square *square2 = new Square(side);
  cout << square2->toString() << endl;

  // Square from perimeter
  float perimeter = reader('p');
  Square *square3 = new Square('p', perimeter);
  cout << square3->toString() << endl;

  // Square from area
  float area = reader('a');
  Square *square4 = new Square('a', area);
  cout << square4->toString() << endl;

  // Square from diagonal
  float diagonal = reader('d');
  Square *square5 = new Square('d', diagonal);
  cout << square5->toString() << endl;
}

float reader(char question) {

  static string *questions = new string[4]{
      "Side: ",
      "Perimeter: ",
      "Area: ",
      "Diagonal: ",
  };

  string message;

  if (question == 's') {
    message = questions[0];
  } else if (question == 'p') {
    message = questions[1];
  } else if (question == 'a') {
    message = questions[2];
  } else if (question == 'd') {
    message = questions[3];
  } else {
    message = "Invalid question";
  }

  cout << message;

  float num;
  cin >> num;

  return num;
}