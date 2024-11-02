#include<stdio.h>
#define MAX 100
int main()
{
    int i,j,n,Counter_Unique_Value;
    int Array[MAX];

    printf("Enter The Number Of Elements In A Array = ");
    scanf("%d",&n);

    printf("Enter Elements oF Array = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }

    printf("The Unique Elements In Array =\n");

    for(i=0;i<n;i++)
    {
       Counter_Unique_Value = 1;
       for(j=0;j<n;j++)
       {
           if(i!=j && Array[i] == Array[j])
           {
               Counter_Unique_Value = 0;
               break;
           }
       }
       if (Counter_Unique_Value)
       {
           printf("%d \n",Array[i]);
       }
    }
    return 0;
}
