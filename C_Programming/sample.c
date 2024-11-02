/* #include<stdio.h>
int main()
{
    typedef int data;
    data a,b,c,d,e,f,i;
    a=5;
    b=3;
    c=2;
    d=10;
    e=8;
    f=6;

    printf("Mathematical Calculation ");
    printf("\n");

    i=a+b*c%d-e*f;

    printf("Output= %d ",i);

}

#include<stdio.h>
void fun (int *, int *);
void main()
{
    int a,b;
    a=10;
    b=20;

    printf("\n Before a=%d and b=%d",a,b);

    fun(&a,&b);

    printf("\n After a=%d and b=%d",a,b);
}
void fun(int *x,int *y)
{
    *x=11;
    *y=12;
}

#include<stdio.h>
void swap(int * num1, int * num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int num1,num2;
    printf("Enter value of num1 and num2: ");
    scanf("%d %d",&num1, &num2);
//displaying numbers before swapping
printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
//calling the user defined function swap()
swap(&num1,&num2);
//displaying numbers after swapping
printf("After Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
return 0;
}

#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;
    printf("Enter value of num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    // Displaying numbers before swapping
    printf("Before Swapping: num1 is: %d, num2 is: %d\n", num1, num2);

    // Calling the user-defined function swap()
    swap(&num1, &num2);

    // Displaying numbers after swapping
    printf("After Swapping: num1 is: %d, num2 is: %d\n", num1, num2);

    return 0;
}

*/
