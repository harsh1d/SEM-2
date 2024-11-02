#include<stdio.h>
int main()
{
    float f,result;
    printf("\n HARSH D \n");
    printf("Enter the temperature in Fahrenheit = ");
    scanf("%f",&f);
    result=(f - 32)*5/9;
    printf("Fahrenheit: %.3f converts to %.3fC",f,result);
    return 0;
}
