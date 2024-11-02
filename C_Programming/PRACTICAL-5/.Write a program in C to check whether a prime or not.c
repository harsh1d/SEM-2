#include <stdio.h>

int isPrime(int num)
{
    int i;
    if (num <= 1)
    {
        return 0; // Not a prime number
    }

    for ( i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main()
{
    printf("\n HARSH D \n");
    int number, isPrimeNumber;

    printf("Enter a number to check if it is a prime number: ");
    scanf("%d", &number);

    isPrimeNumber = isPrime(number);

    if (isPrimeNumber == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
