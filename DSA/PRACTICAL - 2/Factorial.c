#include <stdio.h>

int factorial(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    printf("\n HARSH D \n");
    int num, fact;

    printf("Enter a Number to find factorial: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        fact = factorial(num);
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}
