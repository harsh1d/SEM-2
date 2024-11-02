#include<stdio.h>
void main()
{
    printf("\n HARSH D\n");
    int a;
    printf("Enter A Number = ");
    scanf("%d",&a);

    if (a >= 0)
    {
        printf("The Given Number %d Is Positive(+ve)",a);
    }
    else
    {
        if (a < 0)
        {
            printf("The Given Number %d Is Negative(-ve)",a);
        }
        else
        {
            printf("The Given Number %d Is Zero(0)",a);
        }
    }
    return 0;
}
