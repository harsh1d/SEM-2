#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for ( i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all elements is: %d", sum);

    return 0;
}
