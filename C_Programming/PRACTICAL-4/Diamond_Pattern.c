#include <stdio.h>

int main()
{
    printf("\n HARSH D\n");
    int rows, i, j, space;

    // Input the number of rows
    printf("Enter the number of rows (must be odd): ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Please enter an odd number of rows for a symmetric diamond.\n");
        return 1;  // Exit the program with an error code
    }

    // Print the upper half of the diamond
    for (i = 1; i <= rows; i += 2) {
        // Print leading spaces
        for (space = 0; space < (rows - i) / 2; ++space) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    // Print the lower half of the diamond (excluding the center row for an odd number of rows)
    for (i = rows - 2; i >= 1; i -= 2) {
        // Print leading spaces
        for (space = 0; space < (rows - i) / 2; ++space) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

