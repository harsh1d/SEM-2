// Define a structure named Circle to represent a circle with a radius. Write a C program to calculate the area and perimeter of two circles and display the results.

#include<stdio.h>
#include<math.h>

struct Circle
{
  float radius;
};
int main()
{
  printf("\n HARSH D \n");
  struct Circle c1,c2;

  float area1,area2,perimeter1,perimeter2;
  printf("Enter the radius of the first circle: ");
  scanf("%f",&c1.radius);
  printf("Enter the radius of the second circle: ");
  scanf("%f",&c2.radius);
  area1 = M_PI * pow(c1.radius,2);
  area2 = M_PI * pow(c2.radius,2);
  perimeter1 = 2 * M_PI * c1.radius;
  perimeter2 = 2 * M_PI * c2.radius;
  printf("\nThe area of the first circle is %f\n",area1);
  printf("\nThe area of the second circle is %f\n",area2);

  printf("\nThe perimeter of the first circle is %f\n",perimeter1);
  printf("\nThe perimeter of the second circle is %f\n",perimeter2);

  return 0;
}
