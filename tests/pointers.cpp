#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a, *b;

    a = 10;     cout << a << "   " << &a << "    " << &a + 2        << endl;
    b = &a;     cout << b << "   " << (*b) * 2       << endl;
    *b = 13;    cout << a << "   " << &b + 2        << endl;

    return 0;
}
