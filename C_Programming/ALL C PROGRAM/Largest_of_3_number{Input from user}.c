#include<stdio.h>

int main()
{
    printf("\n HARSH D \n");
    int a,b,c;
    printf("Enter Number 1 = ");
    scanf("%d",&a);
    printf("Enter Number 2 = ");
    scanf("%d",&b);
    printf("Enter Number 3 = ");
    scanf("%d",&c);

    printf("\n");
    if (a>b && a>c){
        printf("%d is Largest",a);
    }
        else if(b>a && b>c){
            printf("%d is Largest",b);
        }
    else if (c>a && c>b){
            printf("%d is Largest",c);
        }
        return 0;
}
