// 5 - Present the x numbers of the Fibonacci sequence: Fibonacci(int x)
int *fibonacci(int x) {
    
    if (x <= 0) return nullptr;

    int *fib = new int[x];
    
    fib[0] = 0;
    if (x == 1) 
        return fib;
    
    fib[1] = 1;
    if (x == 2) 
        return fib;

    for (int i = 2; i < x; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // previous + before previous
    }

    return fib;
}