#include<stdio.h>

void square(int a);
void main()
{
    int a;
    printf("Enter The Number = ");
    scanf("%d",&a);

    square(a);
}
void square(int a)
{
    int c = a*a;
    printf("Square = %d ",c);
}
