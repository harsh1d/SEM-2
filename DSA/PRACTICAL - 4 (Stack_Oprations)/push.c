#include <stdio.h>
#define MAX 10 /* Defining the maximum size of the stack */

int stack[MAX], top = -1;

// Function to add an element to the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top = top + 1;
        stack[top] = value;
    }
}

// Function to display the stack
void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    printf("\nHARSH D\n");

    int value, choice;
    do {
        printf("\nChoose an option:\n");
        printf("1. Push element\n");
        printf("2. Display stack\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push onto the stack: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
