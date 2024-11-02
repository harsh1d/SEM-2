#include<stdio.h>
main()                 /*Display the integer 0 through 9 */
{
    int A=0;

    while (A <= 9)
    {
        printf("%d\n",A);
        ++A;
    }
}

/* Initially the digit is assigned a value of  0. The while loop then
the Value of A ,increases its value by 1 and then repeats the cycle
,until the value of the digit exceeds 9. The Net effect is that the body
of the loop will be repeated 10 times ,resulting in 10 consecutive lines
of output .Each line will contain a successive integer value ,beginning
with 9 .Thus ,when the program is run ,the following output will be
generated .
0
1
2
3
4
5
6
7
8
9
*/
