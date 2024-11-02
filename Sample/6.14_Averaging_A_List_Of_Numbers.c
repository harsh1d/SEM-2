#include<stdio.h>

/*Calculate the average of n number */

main()
{
    int n, count;
    float x, Average, sum = 0;

    /*Initialize and read in a value for n */

    printf("How Many Number ? = ");
    scanf("%d",&n);

    /*Read in the Number */

    for (count = 1;count <= n; ++count)
    {
        printf("x = ");
        scanf("%f",&x);
        sum += x;
    }

    /*Calculate the average and write out the answers */

    Average = sum/n;

    printf("\n The Average Is %f \n",Average);
}
