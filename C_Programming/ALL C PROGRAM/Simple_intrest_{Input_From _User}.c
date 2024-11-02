#include<stdio.h>
int main()
{
    float principal, rate;
    int time;
    float simple_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period: ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("Simple Interest: %f", simple_interest);
    return 0;
}
