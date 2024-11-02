#include <stdio.h>

int main() {
    printf("\n HARSH D \n");

    int Angle_1;
    int Angle_2;
    int Angle_3;
    int Number_Limit = 180;
    int Sum;

    // Input angles of the triangle
    printf("\n Enter The Angle 1 of Triangle = ");
    scanf("%d", &Angle_1);
    printf("\n Enter The Angle 2 of Triangle = ");
    scanf("%d", &Angle_2);
    printf("\n Enter The Angle 3 of Triangle = ");
    scanf("%d", &Angle_3);
    Sum = Angle_1+Angle_2+Angle_3;
    printf("\n Sum of Angle = %d",Sum);
    // Check if any angle exceeds the limit
    if (Angle_1 >= Number_Limit || Angle_2 >= Number_Limit || Angle_3 >= Number_Limit) {
        printf("\n INVALID ANGLE: Angle(s) exceeds 180 degrees.\n");
    } else  {
        printf("\n VALID ANGLEs\n");
    }

    if (Sum == 180)
    {
        printf("\n Valid Triangle ");
    }
        else
        {
            printf("\n It Will Not Form Triangle");
        }

    return 0;
}
