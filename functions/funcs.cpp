/* Functions exercises
— Given a vector of numbers, return the largest number: max(int[] v)
- The factorial(int x) shall return the x! 
- The gcd(int a, int b) shall return the greatest common divisor of two numbers

— Retorne os x números primos: NumerosPrimos(int x)
- Apresente os x números da sequência de Fibonacci: Fibonacci(int x)
— Converta um dado número binário para decimal: BinToDec(int x)
- Converta um dado número decimal para binário: DecToBin(int x)
- Dado um número x faça a decomposição em um produto de fatores primos:
FatoracaoNumerosPrimos(int x)*/

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

}

