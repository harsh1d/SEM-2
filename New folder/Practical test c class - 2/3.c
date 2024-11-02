
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
        }
    }

    printf("String after removing all blank spaces: %s", str);

    return 0;
}
