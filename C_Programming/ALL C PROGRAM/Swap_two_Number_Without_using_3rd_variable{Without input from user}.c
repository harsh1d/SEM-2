#include<stdio.h>
void main()
{
    int a=5;
    int b=6;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a=5 \n b=6 ");
    printf("\n After Swapping :");
    printf("\n a=%d \n b=%d",a,b);
}
