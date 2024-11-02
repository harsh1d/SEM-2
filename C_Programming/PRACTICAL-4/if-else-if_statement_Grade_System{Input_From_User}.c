#include <stdio.h>

int main()
{
    printf("\n HARSH D\n");
    float a;
    printf("ENTER YOUR PERCENTAGE = ");
    scanf("%f", &a);

    if (a >= 90) {
        printf("A Grade\n");
    } else if (a >= 70) {
        printf("B Grade\n");
    } else if (a >= 50) {
        printf("C Grade\n");
    } else {
        printf("F Grade\n");
    }

    return 0;
}
