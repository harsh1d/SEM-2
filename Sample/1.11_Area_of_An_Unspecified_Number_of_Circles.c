#include<stdio.h>

#define PI 3.14159

/*Program to Calculate the area of Circles, Using a While Loop;
          Number Of Circles is Unspecified */

main()
{
    float radius, area ;  /*Variable Declaration */
    float process(float radius); /*Function Declaration */

    printf("To Stop , Enter 0 For the Radius \n");
    printf("\nRadius = ");
    scanf("%f",&radius);

    while (radius != 0)
    {
        if (radius < 0)
            area = 0;
        else
            area = process(radius);

        printf("Area = %f\n",area);

        printf("\nRadius = ");
        scanf("%f",&radius);
    }
}
float process(float r)   /*function Definition */
{
    float a;

    a = PI *r *r ;
    return(a);
}
