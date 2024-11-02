#include<stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int n,sum = 0;

    printf("The Number Of Elements = ");
    scanf("%d",&n);

    int array[n],i;

    printf("Enter %d Elements = \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("The Sum of %d elements in Array = %d",n,sum);

    return 0;
}
