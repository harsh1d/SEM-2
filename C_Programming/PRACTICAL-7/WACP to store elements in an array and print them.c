#include <stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int n;

    printf("Enter The Elements = ");
    scanf("%d",&n);

    int a[n],i;

    printf("Enter %d Element =\n",n);
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("You Entered = \n",n);
    for(i = 0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
