#include <stdio.h>

// Function to swap two elements in an array using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort an array using pointers
void sort_array(int *arr, int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 1, 4, 2},i,j;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using the sort_array function
    sort_array(arr, n);

    // Print the sorted array
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
