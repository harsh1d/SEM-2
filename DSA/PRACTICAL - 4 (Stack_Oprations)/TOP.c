// Stack opeartions TOP
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the stack

int stack[MAXSIZE];
int top = -1;

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to return the top element of the stack
int topOperation() {
    if (!isEmpty()) {
        return stack[top];
    } else {
        printf("Stack is empty\n");
        return -1; // Return -1 if the stack is empty
    }
}

// Function to push an element to the stack
void push(int data) {
    if (top == MAXSIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = data;
    }
}

// Function to display the current elements of the stack
void display()
{
   int i;
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for ( i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    printf("\n HARSH D \n");
    // Push elements to the stack
    push(10);
    push(20);
    push(30);

    // Perform the TOP operation
    int topElement = topOperation();
    if (topElement != -1) {
        printf("Top element is: %d\n", topElement);
    }

    // Display the current elements of the stack
    display();

    return 0;
}
