#include <stdio.h>

int main()
{
    printf("\n HARSH D \n");
    int rows, i, j;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the inverted full pyramid
    for (i = rows; i >= 1; --i) {
        // Print leading spaces
        for (j = 0; j < rows - i; ++j) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
