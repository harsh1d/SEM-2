#include<stdio.h>

main()

{
    printf("\n HARSH D \n");
    int x,y;
    printf("\n Enter Value of Variable 1 = ");
    scanf("%d",&x);
    printf("\n Enter Value of Variable 2 = ");
    scanf("%d",&y);
    x+=y;
    printf("\n SUM = %d",x);
    x-=y;
    printf("\n SUBTRACTION = %d",x);
    x*=y;
    printf("\n MULTIPLICATION = %d",x);
    x/=y;
    printf("\n DIVISION = %d",x);
    x%=y;
    printf("\n MODOLOUS = %d",x);

    /* printf("\n");
    y+=x;
    printf("\n SUM = %d",y);
    y-=x;
    printf("\n SUBTRACTION = %d",y);
    y*=x;
    printf("\n MULTIPLICATION = %d",y);
    y/=x;
    printf("\n DIVISION = %d",y);
    y%=x;
    printf("\n MODOLOUS = %d",y);
    */


    printf("\n");
    printf("\n SUM = %d",y+=x);
    printf("\n SUBTRACTION = %d",y-=x);
    printf("\n MULTIPLICATION =%d",y*=x);
    printf("\n DIVISION = %d",y/=x);
    printf("\n MODOLOUS = %d",y%=x);

}
