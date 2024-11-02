// Write a program in C to find the smallest missing element in a sorted array.
// Expected Output :
// The given array is : 0 1 3 4 5 6 7 9
// The missing smallest element is: 2

#include <stdio.h>
int main()
{
  printf("\n HARSH D \n");
  int arr[100], n, i, j, temp;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
        {
          if (arr[i] > arr[j])
          {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
    }
  printf("The sorted array is: ");
  for (i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }
  printf("\n");
  for (i = 0; i < n - 1; i++)
    {
      if (arr[i] + 1 != arr[i + 1])
      {
        printf("\n The missing smallest element is: %d", arr[i] + 1);
      }
    }
  return 0;
}
