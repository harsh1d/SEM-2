#include<stdio.h>

int main()
{
    int Km,m;
    printf("Enter the Distance in Km = ");
    scanf("%d",&Km);

    m= Km * 1000;
    printf("\n The distance In Meter = %d",m);


    int Cm;
    Cm = m * 100;
    printf("\n The distance In Centimeter = %d",Cm);

    float Feet;
    Feet = m * 3.280 ;
    printf("\n The distance In Feet = %.3f",Feet);

    int Inches;
    Inches = Feet * 12;
    printf("\n The distance In Inches = %d",Inches);

    printf("\n");
}
