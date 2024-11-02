#include<stdio.h>

void sum(int*, int*);
int main()
{
    printf("\n HARSH D \n");
    int a=10;
    int b=20;

    sum(&a,&b);

    return 0;
}
 void sum(int *x, int *y)
 {
     int t;
     t=*x+*y;
     printf("Sum = %d",t);
 }
