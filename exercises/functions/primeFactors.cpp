#include <cmath>
#include <iostream>

using namespace std;

// 8 - Given a number x, perform the decomposition into prime factors: primeFactors
/**
 * Prints all the prime factors of a given number
*/
void primeFactors(int num) {
    
    int original = num;

    // even factors
    while (num % 2 == 0) {
        cout << 2 << ", ";
        num /= 2;
    }

    // odd factors
    for (int oddFactor = 3; oddFactor <= original; oddFactor += 2) {

        while (num % oddFactor == 0) {
            cout << oddFactor << ", ";
            num /= oddFactor;
        }
    }

}
