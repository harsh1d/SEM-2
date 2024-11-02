// Write a Code For Bit Field

#include <stdio.h>
struct data
{
int a:2;
int b:4;
int c:4;
};
int main()
{
  printf("\n HARSH D \n");
  printf("Size Of Struct = %d" , sizeof(struct data));
  struct data d1;

  d1.a = 2;
  d1.b = 15;
  d1.c = 14;

  printf("\n a = %d" , d1.a);
  printf("\n b = %d" , d1.b);
  printf("\n c = %d" , d1.c);

  return 0;
}
