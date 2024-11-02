#include<stdio.h>
#include<math.h>
int main()
{
    float principal, rate;
    int time;
    float compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period: ");
    scanf("%d", &time);

    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Compound Interest: %f", compound_interest);
    return 0;
}
