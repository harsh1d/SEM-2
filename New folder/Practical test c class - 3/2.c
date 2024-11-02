//  Write a program in C to remove duplicate elements form array in C

#include<stdio.h>
int main()
{
  printf("\n HARSH D \n");
  int arr[100],i,j,n,temp;
  printf("Enter the size of array = ");
  scanf("%d",&n);
  printf("Enter the elements of array = ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            for(int k=j;k<n;k++)
              {
                arr[k]=arr[k+1];
              }
            n--;
          }
        }
    }
  printf("Array after removing duplicate elements = ");
  for(i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
  return 0;
}

