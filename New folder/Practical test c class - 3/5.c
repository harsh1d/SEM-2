//  Define a structure cricket that will describe the following information: Player name
// Team name
// Batting average
// Using cricket, declare an array player with 50 elements and WAP to read the information about all the 50 players and print team wise list containing names of players with their batting average.

#include <stdio.h>
#include <string.h>

struct cricket
{
  char name[20];
  char team[20];
  float batting_avg;
};
int main()
{
  printf("\n HARSH D \n");
  struct cricket player[50];
  int i,n;
  printf("Enter the number of players = ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("Enter the name of the player = ");
      scanf("%s",player[i].name);
    }
  for(i=0;i<n;i++)
    {
      printf("Enter the name of the team = ");
      scanf("%s",player[i].team);
    }
  for(i=0;i<n;i++)
    {
      printf("Enter the batting average = ");
      scanf("%f",&player[i].batting_avg);
    }
  for(i=0;i<n;i++)
    {
      printf("Name: %s\n",player[i].name);
      printf("Team: %s\n",player[i].team);
      printf("Batting average: %f\n",player[i].batting_avg);
    }
  return 0;
}
