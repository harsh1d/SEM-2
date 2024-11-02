#include<stdio.h>
void main()
{
    printf("\n HARSH D \n");
    int a;
    printf("Enter Temperature in Fahrenheit = ");
    scanf("%d",&a);

    float Celsius = a - 32.0*(5.0 / 9.0);
    printf("Temperature In Celsius = %f",Celsius);
    return 0;
}

