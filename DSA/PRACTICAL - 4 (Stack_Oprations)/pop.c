// Stack opeartions pop
#include <stdio.h>
#include <stdlib.h> // For exit function

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1; // Initialize top index to -1 (empty stack)

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow: Cannot push element\n");
        exit(EXIT_FAILURE); // Terminate program on stack overflow
    }
    stack[++top] = value; // Increment top and add value to stack
    printf("Pushed %d onto the stack\n", value);
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Stack is empty\n");
        exit(EXIT_FAILURE); // Terminate program on stack underflow
    }
    int value = stack[top--]; // Get value from top and decrement top
    printf("Popped %d from the stack\n", value);
    return value;
}

// Function to display the stack elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
  printf("\n HARSH D \n");
    // Push some elements onto the stack
    push(10);
    push(20);
    push(30);

    // Display stack elements
    display();

    // Pop an element from the stack
    int poppedValue = pop();
    printf("Popped value: %d\n", poppedValue);

    // Display updated stack elements
    display();

    return 0;
}

