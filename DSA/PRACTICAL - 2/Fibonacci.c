#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    printf("\n HARSH D \n");
    int num, fib;

    printf("Enter a number to find its Fibonacci: ");
    scanf("%d", &num);

    fib = fibonacci(num);
    printf("Fibonacci of %d = %d\n", num, fib);

    return 0;
}
