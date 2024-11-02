#include<stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int Angle_1;
    int Angle_2;
    int Angle_3;
    int Number_Limit = 180;
    printf("Enter The Angle 1 of Triangle = ");
    scanf("%d",&Angle_1);
    printf("Enter The Angle 2 of Triangle = ");
    scanf("%d",&Angle_2);
    printf("Enter The Angle 3 of Triangle = ");
    scanf("%d",&Angle_3);

     if (Angle_1 >= Number_Limit || Angle_2 >= Number_Limit || Angle_3 >= Number_Limit) {
        printf("\n INVALID ANGLE: Angle(s) exceeds 180 degrees.\n");
    } else {
        printf("\n VALID TRIANGLE\n");
    }

    return 0;
}
