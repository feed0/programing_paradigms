// 3 - The gcd(int a, int b) shall return the greatest common divisor of two numbers
int gcd(int a, int b)
{
    int i = 1;
    int gcd;
    while (i <= a && i <= b)
    {
        // verifica se i é um fator de ambos os números
        if (a % i == 0 && b % i == 0)
            gcd = i;
        i++;
    }
    return gcd;
}
