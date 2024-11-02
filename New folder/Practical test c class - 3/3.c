// Write a program in C to find largest and smallest number in array.
#include<stdio.h>
int main()
{
  int arr[10],i,n,large,small;
  printf("Enter the size of array = ");
  scanf("%d",&n);
  printf("Enter the elements of array = ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  large=small=arr[0];
  for(i=1;i<n;i++)
    {
      if(arr[i]>large)
      {
        large=arr[i];
      }
      if(arr[i]<small)
      {
        small=arr[i];
      }
    }
  printf("Largest number = %d\n",large);
  printf("Smallest number = %d\n",small);
}
