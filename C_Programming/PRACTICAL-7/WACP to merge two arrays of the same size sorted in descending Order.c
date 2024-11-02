#include<stdio.h>
#define MAX 100

void mergeArray(int Array1[], int Array2[], int n, int merged[])
{
    int i=0,j=0,k=0;

    while (i<n && j<n)
    {
        if (Array1[i]>Array2[j])
        {
            merged[k++] = Array1[i++];
        }
        else
        {
            merged[k++] = Array2[j++];
        }
    }
    while (i<n)
    {
        merged[k++] = Array1[i++];
    }
    while (j<n)
    {
        merged[k++] = Array2[j++];
    }
}
void sortArray(int array[], int n)
{
    int i,j;
    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j=i+1 ; j++)
        {
            if(array[i]<array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main()
{
    printf("\n HARSH D \n");
    int n;

    printf("Enter The Numbers oF Elements in The Array = ");
    scanf("%d",&n);

    int array1[MAX], array2[MAX], merged[MAX * 2];
    int i,j;

    printf("Enter Elements First Array In Descending Order = \n");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",array1[i]);
    }
    printf("Enter Elements Second Array In Descending Order = \n");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",array2[j]);
    }
    sortArray(array1,n);
    sortArray(array2,n);

    mergeArray(array1,array2,n,merged);

    printf("Merged Array In Descending Order = \n");
    for(i=0 ; i<n*2 ; i++)
    {
        printf("%d \n",merged[i]);
    }
    return 0;
}
