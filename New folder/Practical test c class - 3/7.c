// Write a program in C to check a String is palindrome or not.

#include <stdio.h>
#include <string.h>
int main()
{
  printf("\n HARSH D \n");
  char str[100];
  int i, len, flag = 0;
  printf("Enter a string:");
  scanf("%s", str);

  len = strlen(str);
  for(i=0;i<len/2;i++)
    {
      if(str[i]!=str[len-i-1])
      {
        flag=1;
      }
    }
  if(flag==1)
  {
    printf("Not a palindrome");
  }
  else
  {
    printf("Palindrome");
  }
  return 0;
}
