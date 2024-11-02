#include<stdio.h>
void main()
{
    printf("\n HARSH D \n");
    int a;
    printf("Enter Temperature in Celsius = ");
    scanf("%d",&a);

    float fahrenheit = (a * 9.0 / 5.0) + 32.0;
    printf("Temperature In Fahrenheit = %f",fahrenheit);
}
