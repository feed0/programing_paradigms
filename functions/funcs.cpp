/* 
    FNCTION EXERCISES

    BY: 
        Felipe Campelo,
        Taissa Aleves,
        Vinicius Lima.

    — 1 Given a vector of numbers, return the largest number: max(int[] v)
    - 2 The factorial(int x) shall return the x! 
    - 3 The gcd(int a, int b) shall return the greatest common divisor of two numbers
    
    — 4 Retorne os x números primos: NumerosPrimos(int x)
    - 5 Apresente os x números da sequência de Fibonacci: Fibonacci(int x)
    — 6 Converta um dado número binário para decimal: BinToDec(int x)
    - 7 Converta um dado número decimal para binário: DecToBin(int x)
    - 8 Dado um número x faça a decomposição em um produto de fatores primos: FatoracaoNumerosPrimos(int x)
*/

#include <assert.h>
#include <iostream>
using namespace std;

// — Given a vector of numbers, return the largest number: max(int[] v)
int max(int v[]) {
    int max = v[0];
    int size = sizeof(v) / sizeof(v[0]); // https://stackoverflow.com/questions/33523585/how-do-sizeofarr-sizeofarr0-work
    for (int i = 1; i < size; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

// - The factorial(int x) shall return the x! 
int factorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    return fact;
}

// - The gcd(int a, int b) shall return the greatest common divisor of two numbers
int gcd(int a, int b) {
    int i = 1;
    int gcd;
    while(i <= a && i <= b)
    {
        // verifica se i é um fator de ambos os números
        if(a%i==0 && b%i==0)
            gcd = i;
        i++;
    }
    return gcd;
}


int main() {
    assert(gcd(10, 5) == 5);
    assert(gcd(14, 28) == 14);
    assert(gcd(18, 35) == 1);
    assert(gcd(60, 48) == 12);
    assert(gcd(101, 103) == 1);

    cout<<"Todos os casos passaram"<<endl;

    return 0;
}
