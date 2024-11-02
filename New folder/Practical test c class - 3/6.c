// Write a C a program to calculate sum of elements of an array using pointer

#include<stdio.h>
int main()
{
  printf("\n HARSH D \n");
  int array[50],i,n,sum=0;
  printf("The Number Of elements in the array = ");
  scanf("%d",&n);
  printf("Enter the elements of the array = ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }
  for(i=0;i<n;i++)
    {
      sum=sum+array[i];
    }
  printf("The Sum of the elements of the array is = %d",sum);

  return 0;
}
