/* Define a structure cricket that will describe the following information:
Player name
Team name
Batting average
Using cricket, declare an array player with 50 elements and WAP to
read the information about all the 50 players and print team wise list
containing names of players with their batting average. */
#include <stdio.h>
#include <string.h>
struct cricket
{
    char name[20];
    char team[20];
    float batting_average;
};
int main()
{
    struct cricket player[50];
    int n;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
      {
        printf("Enter the name of player %d: ", i + 1);
      }
    return 0;
}
