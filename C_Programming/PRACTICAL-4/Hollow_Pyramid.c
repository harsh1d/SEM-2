#include <stdio.h>

int main() {
    printf("\n HARSH D\n");
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half of the diamond
    for(int i = 1; i <= n; i++) {
        // Leading spaces
        for(int j = i; j <= n; j++) {
            printf(" ");
        }

        // Asterisks and spaces
        for(int k = 1; k <= 2 * i - 1; k++) {
            if(k == 1 || k == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(int i = n - 1; i >= 1; i--) {
        // Leading spaces
        for(int j = n; j >= i; j--) {
            printf(" ");
        }

        // Asterisks and spaces
        for(int k = 1; k <= 2 * i - 1; k++) {
            if(k == 1 || k == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
