#include <stdio.h>

int main() {
    printf("\n HARSH D \n");
    int a[5],i;

    printf("Enter the elements of the array:\n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of the array in reverse order:\n");
    for ( i = 4; i >= 0; i--) {
        printf("%d\n", a[i]);
    }

    return 0;
}
