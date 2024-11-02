#include<stdio.h>

/*Calculate the average for severals different list of numbers */

main()
{
    int n, count, loops, loopcount;
    float x, Average, Sum;

    /*Read In the Numbers of list */
    printf("How Many List ? = ");
    scanf("%d",&loops);

    /*Outer Loop (Process each list of numbers )*/

    for(loopcount = 1;loopcount <= loops ; ++loopcount);
    {
        /*Initialize and read in a value for n */
            Sum = 0;
            printf("\nList Number %d \nHow Many Numbers ? ",loopcount);
            scanf("%d",&n);

            /*Read in the Numbers */

            for (count = 1;count <= n; ++count)
            {
                printf("x = ");
                scanf("%f",&x);
                Sum += x;
            }   /*End inner Loop */

            /*Calculate the average and write out the average */

            Average = Sum/n;
            printf("\nThe Average is %.3f\n",Average); /* %.3f will Take the Answer to 3 decimal points */

    } /*End of Outer Loop */
}
