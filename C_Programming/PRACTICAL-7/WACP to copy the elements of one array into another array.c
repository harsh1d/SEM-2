#include<stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int n,i;
    int array1[n],array2[n];

    printf("Enter The Number Of Elements in the Array = ");
    scanf("%d",&n);
    printf("Enter Elements Of Array = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    /*Copying Elements from array 1 to 2*/
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    /*Display Elements oF Array*/
    printf("Elements oF Second Array After Copying = \n");
    for(i=0;i<n;i++)
    {
        printf("Elements = %d \n",array2[i]);
    }
}
