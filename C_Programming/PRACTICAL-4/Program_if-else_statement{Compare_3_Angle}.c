#include<stdio.h>
void main()
{
    printf("\n HARSH D\n");
    int a,b,c,d;
    printf("Enter Angle_1 =");
    scanf("%d",&a);
    printf("Enter Angle_2 =");
    scanf("%d",&b);
    printf("Enter Angle_3 =");
    scanf("%d",&c);

    d=a+b+c;
    if (d==180)
    {
        printf("THIS WILL FORM TRIANGLE");
    }
    else
    {
        printf("ENTER VALID ANGLE");
    }
}
