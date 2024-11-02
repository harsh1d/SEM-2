#include <stdio.h>

int square(int num) {
    return num * num;
}

int main()
{
    printf("\n HARSH D \n");
    int number, sq;

    printf("Enter a number to find its square: ");
    scanf("%d", &number);

    sq = square(number);

    printf("Square of %d = %d\n", number, sq);

    return 0;
}
