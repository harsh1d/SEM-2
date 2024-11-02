#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in ascending order
    qsort(arr, n, sizeof(arr[0]), compare);

    // Traverse the sorted array and print unique elements
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("%d", arr[i]);

    return 0;
}

