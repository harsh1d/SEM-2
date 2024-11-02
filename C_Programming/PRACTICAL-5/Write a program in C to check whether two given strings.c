#include <stdio.h>
#include <string.h>

void sortString(char *str)
{
    int len = strlen(str);
    int i, j, temp;

    // Bubble sort to sort the characters of the string
    for (i = 0; i < len-1; i++) {
        for (j = i+1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int checkAnagram(char *str1, char *str2)
{
    // Length of both strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they can't be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Compare the sorted strings
    if (strcmp(str1, str2) == 0) {
        return 1; // Anagram
    } else {
        return 0; // Not an Anagram
    }
}

int main() {
    char str1[100], str2[100];
    printf("\n HARSH D \n");
    printf("Input the first String: ");
    fgets(str1, 100, stdin);

    printf("Input the second String: ");
    fgets(str2, 100, stdin);

    // Remove newline characters from input strings
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (checkAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
