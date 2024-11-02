// Write a C a program to print the address of character and the character of string using pointer

#include<stdio.h>
#include<string.h>
int main()
{
  printf("\n HARSH D \n");
  char str[100];
  char *ptr;
  int i;
  printf("Enter a string = ");
  scanf("%s",str);
  ptr=str;
  for(i=0;i<strlen(str);i++)
    {
      printf("Address of %c is %u\n",*(ptr+i),ptr+i);
    }
  return 0;
}
