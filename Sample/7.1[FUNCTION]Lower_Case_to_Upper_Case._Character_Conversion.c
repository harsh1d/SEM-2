#include<stdio.h>

/*Lower-Case To Upper-Case Character Using A Programmer-Defined Function */

main()
{
    char lower, upper;
    char lower_to_upper(char lower); /*Function Declaration */

    printf("Please Enter A lower-Case Character : ");
    scanf("%c",&lower);

    upper = lower_to_upper(lower);
    printf("\nThe Upper-Case equivalent is %c\n\n", upper);
}

char lower_to_upper(char c1)  /*Function Definition */
{
    char c2;

    c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a') : c1;
    return(c2);
}
