#include <stdio.h>
#include <string.h>

int check_anagram(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    int count[256] = {0};

    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Input the first String : ");
    fgets(str1, 100, stdin);

    printf("Input the second String : ");
    fgets(str2, 100, stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (check_anagram(str1, str2)) {
        printf("The strings \"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("The strings \"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}
