#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacci(int count)
{
    int i;
    for (i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main()
{
    printf("\n HARSH D \n");
    int count;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &count);

    printf("Fibonacci Series up to %d terms:\n", count);
    printFibonacci(count);

    return 0;
}
