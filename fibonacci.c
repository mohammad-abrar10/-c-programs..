#include <stdio.h>

int main() {
    int n, i;
    long long int fib[50];

    printf("Enter the number of terms (up to 50): ");
    scanf("%d", &n);

    fib[0] = 0; // First term
    fib[1] = 1; // Second term

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // Generating the Fibonacci series
    }

    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }

    return 0;
}
