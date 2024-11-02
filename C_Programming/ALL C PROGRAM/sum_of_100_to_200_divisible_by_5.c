#include <stdio.h>

int main()
{
   int i;

   printf("Numbers from 101 to 199 that are divisible by 5: \n");

   for(i=101; i<200; i++)
   {
     if(i%5==0)
     {
       printf("\n%d",i);
     }
   }

   printf("\n");

   int sum=0;

   for(i=101; i<200; i++)
   {
     if(i%5==0)
     {
       sum += i;
     }
   }

   printf("The sum : %d \n", sum);
    return 0;
}
