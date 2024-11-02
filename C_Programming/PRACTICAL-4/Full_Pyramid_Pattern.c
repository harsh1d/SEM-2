#include <stdio.h>
int main()
{
    printf("\nHARSH D \n");
    int n, i, j, num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    num = 1;
    for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
    printf(" ");
    }
    for (j = 0; j < i; j++) {
    printf("* ", num);
    num++;
    }
 printf("\n");
 }
}
