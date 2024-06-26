/*
    FUNCTIONS EXERCISES
    1 — Given a vector of numbers, return the largest number: max(int[] v)
    2 - The factorial(int x) shall return the x!
    3 - The gcd(int a, int b) shall return the greatest common divisor of two numbers
    4 — Return the x prime numbers: Prime Numbers(int x)
    5 - Present the x numbers of the Fibonacci sequence: fibonacci(int x)
    6 - Convert a given binary number to decimal: binToDec(int x)
    7 - Convert a given decimal number to binary: decToBin(int x)
    8 - Given a number x, perform the decomposition into of prime factors: primeFactors(int x)
*/

#include <assert.h>
#include <iostream>

#include "functions/functions.h"

using namespace std;

int main()
{

    // TEST max

    // int arr[] = {1, 2, 3, 90, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // assert(max(arr, size) == 90);    // ok
    // assert(max(arr, size) == 1);     // error

    // TEST factorial

    // assert(factorial(5) == 120); // ok
    // assert(factorial(6) == 720); // ok
    // assert(factorial(7) == 5040); // ok
    // assert(factorial(5) == 121); // error

    // TEST gcd

    // assert(gcd(10, 5) == 5); // ok
    // assert(gcd(10, 6) == 2); // ok
    // assert(gcd(10, 7) == 1); // ok
    // assert(gcd(10, 5) == 6); // error

    // TEST firstPrimes

    // int *primes = firstPrimes(5);
    // assert(primes[0] == 2); // ok
    // assert(primes[1] == 3); // ok
    // assert(primes[2] == 5); // ok
    // assert(primes[3] == 7); // ok
    // assert(primes[4] == 11); // ok
    // assert(primes[0] == 3); // error

    // TEST fibonacci

    // int *fib = fibonacci(5);
    // assert(fib[0] == 0); // ok
    // assert(fib[1] == 1); // ok
    // assert(fib[2] == 1); // ok
    // assert(fib[3] == 2); // ok
    // assert(fib[4] == 3); // ok
    // assert(fib[0] == 1); // error

    // TEST binToDec

    // assert(binToDec(1010) == 10); // ok
    // assert(binToDec(1011) == 11); // ok
    // assert(binToDec(1010) == 11); // error

    // TEST decToBin
    // assert(decToBin(10) == 1010); // ok
    // assert(decToBin(11) == 1011); // ok
    // assert(decToBin(10) == 1011); // error

    // TEST primeFactors
    primeFactors(10); cout << endl; // 2, 5
    primeFactors(15); cout << endl; // 3, 5

    return 0;
}
