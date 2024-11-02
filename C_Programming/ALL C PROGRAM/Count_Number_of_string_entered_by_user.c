#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    int length;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(string, MAX_LENGTH, stdin);

    // Remove the trailing newline character, if any
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    // Calculate the length of the string
    length = strlen(string);

    // Print the number of characters
    printf("Number of characters: %d\n", length);

    return 0;
}
