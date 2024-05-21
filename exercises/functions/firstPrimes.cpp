// 4 Return the x prime numbers: Prime Numbers(int x)
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int *firstPrimes(int n)
{
    int count = 0;
    int num = 2;
    int *primes = new int[n];
    while (count < n)
    {
        if (isPrime(num))
        {
            primes[count] = num;
            count++;
        }
        ++num;
    }
    return primes;
}
