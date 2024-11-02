#include<stdio.h>
#define EOL '\n'

/* Convert a line of lower-case text to upper-case */

main()
{
    char letter[80];
    int tag,count = 0;

     /*Read in the Lower Case text */

     while ((letter [count] = getchar())  != EOL ) ++count;
     tag = count;

     /*Write out the upper-case text */

     count = 0;
     while (count < tag)
     {
         putchar(toupper(letter[count]));
         ++count;
     }
}
