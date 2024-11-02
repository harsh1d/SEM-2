#include<stdio.h>

int main()
{
    printf("\n HARSH D \n");
    char A;
    printf("Enter Alphabet = ");
    scanf("%c",&A);

    if (A=='a'||A=='e'||A=='i'||A=='o'||A=='u'||
        A=='A'||A=='E'||A=='I'||A=='O'||A=='U')
    {
        printf("THE ALPHABET IS VOWEL");
    }
    else
    {
        printf("THE ALPHABET IS CONSONENT");
    }
}
