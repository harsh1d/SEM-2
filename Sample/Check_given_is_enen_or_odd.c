#include<stdio.h>
int main()
{
    printf("\n HARSH D \n");
    float a;
    printf("\n Enter The Number = ");
    scanf("%f",&a);

    if(a - (int)a == 0)
    {
        printf("\n The Given Number %.1f Is Even",a);
    }
        else
        {
            printf("\n The Given Number %.1f Is Odd",a);
        }
}
