// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.


#include<stdio.h>

struct student
{
  char name[20];
  int age;
  int total_marks;
};
int main()
{
  printf("\n HARSH D \n");
  struct student s1, s2;

  printf("Enter the name of the first student: ");
  scanf("%s",s1.name);
  printf("Enter the age of the first student: ");
  scanf("%d",&s1.age);
  printf("Enter the total marks of the first student: ");
  scanf("%d",&s1.total_marks);

  printf("Enter the name of the second student: ");
  scanf("%s",s2.name);
  printf("Enter the age of the second student: ");
  scanf("%d",&s2.age);
  printf("Enter the total marks of the second student: ");
  scanf("%d",&s2.total_marks);

  printf("The name of the first student is %s\n", s1.name);
  printf("The age of the first student is %d\n", s1.age);
  printf("The total marks of the first student is %d\n", s1.total_marks);

  printf("The name of the second student is %s\n", s2.name);
  printf("The age of the second student is %d\n", s2.age);
  printf("The total marks of the second student is %d\n", s2.total_marks);

  float average = (s1.total_marks + s2.total_marks) / 2.0;
  printf("The average total marks of the two students is %.2f\n", average);

  return 0;
}
