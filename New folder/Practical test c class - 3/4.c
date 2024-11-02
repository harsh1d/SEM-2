// C Program to delete element from array at given index.
#include<stdio.h>
int main()
{
  printf("\n HARSH D \n")
  int i,n,a[100],pos;
  printf("Enter the size of array = ");
  scanf("%d",&n);
  printf("Enter the elements of array = ");
  for (i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the position of element to be deleted = ");
  scanf("%d",&pos);
  if (pos>=n+1)
  {
    printf("Deletion not possible");
  }
  else
  {
    for (i=pos-1;i<n-1;i++)
      {
        a[i]=a[i+1];
      }
    printf("The resultant array is = ");
    for (i=0;i<n-1;i++)
      {
        printf("%d ",a[i]);
      }
  }
  return 0;
}
