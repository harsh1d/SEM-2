// Write a Program For Nested Structure

#include<stdio.h>

// Define the inner structure for student details
struct student_details {
    int roll;
    char name[20];
    int marks;
};

// Define the outer structure for student information
struct student {
    struct student_details details;
};

int main() {
    // Create instances of the outer structure
    struct student s1, s2;

    // Input details for student 1
    printf("Enter Roll Number Of Student 1: ");
    scanf("%d", &s1.details.roll);
    printf("Enter Name Of Student 1: ");
    scanf("%s", s1.details.name);
    printf("Enter Marks Of Student 1: ");
    scanf("%d", &s1.details.marks);

    // Input details for student 2
    printf("Enter Roll Number Of Student 2: ");
    scanf("%d", &s2.details.roll);
    printf("Enter Name Of Student 2: ");
    scanf("%s", s2.details.name);
    printf("Enter Marks Of Student 2: ");
    scanf("%d", &s2.details.marks);

    // Output details for student 1
    printf("\nStudent 1 Details:\n");
    printf("Roll Number: %d\n", s1.details.roll);
    printf("Name: %s\n", s1.details.name);
    printf("Marks: %d\n", s1.details.marks);

    // Output details for student 2
    printf("\nStudent 2 Details:\n");
    printf("Roll Number: %d\n", s2.details.roll);
    printf("Name: %s\n", s2.details.name);
    printf("Marks: %d\n", s2.details.marks);

    return 0;
}

