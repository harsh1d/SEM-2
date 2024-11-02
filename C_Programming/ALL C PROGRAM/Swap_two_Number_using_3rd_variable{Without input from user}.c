#include<stdio.h>
void main()
{
    int a=5;
    int b=6;
    int c;
    c=a;
    a=b;
    b=c;
    printf("\n a=5 \n b=6 ");
    printf("\n After Swapping :");
    printf("\n a=%d \n b=%d",a,b);
}
