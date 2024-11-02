#include<stdio.h>
#include<stdlib.h>
void main ()
{
    printf("\n HARSH D\n");
    int i;
    for(i = 0; i<10; i++)
    {
        printf("\n %d ",i);
        if(i == 5)
        continue;
    }
    printf("\n Continued loop i  = %d",i);

}
