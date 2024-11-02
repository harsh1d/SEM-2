#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index;

    printf("Enter the index of the element you want to delete: ");
    scanf("%d", &index);

    // Check if the index is valid
    if (index >= 0 && index < n)
    {
        // Shift all elements after the index one position to the left
        for (int i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array by 1
        n--;

        // Print the updated array
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid index");
    }

    return 0;
}
