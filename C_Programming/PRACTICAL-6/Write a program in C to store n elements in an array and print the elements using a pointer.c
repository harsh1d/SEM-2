#include <stdio.h>
int main()
{
    printf("\n HARSH D \n");
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++)
        {
    scanf("%d", &arr[i]);
        }
    printf("You entered:\n");
    int *ptr = arr;
    for ( i = 0; i < n; i++)
    {
    printf("%d ", *(ptr + i));
    }
    return 0;
}
