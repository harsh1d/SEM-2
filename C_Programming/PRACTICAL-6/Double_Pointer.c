#include<stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int A = 10;
    int *p;
    int **ptr;
    p = &A;
    ptr = &p;

    printf("\n Address of A = %d",p);
    printf("\n Address of A = %d",*p);
    printf("\n Address of A = %d",ptr);
    printf("\n Address of A = %d",*ptr);
}
