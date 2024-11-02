// Find samallest among 3 number
#include<stdio.h>
int main()
{
  int a = 5;
  int b = 6;
  int c = 7;

  if(a<b || a<c)
  {
    printf("A is smallest");
  }
  else if(b<c)
  {
    printf("B is smallest");
  }
  else
  {
    printf("C is smallest");
  }
}
