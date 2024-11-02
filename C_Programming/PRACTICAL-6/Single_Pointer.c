#include<stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int *p;
    int a = 10;
    p = &a;
    printf("\n Address of A = %d",*p);
    printf("\n Address of A = %d",a);
    printf("\n Address of A = %d",&a);
    printf("\n Address of A = %d",p);
}
