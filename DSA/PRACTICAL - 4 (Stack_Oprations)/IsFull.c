// Stack opeartions IsFull
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the stack

int stack[MAXSIZE];
int top = -1;

// Function to check if the stack is full
int IsFull() {
    if(top == MAXSIZE - 1)
        return 1; // The stack is full
    else
        return 0; // The stack is not full
}

// Function to push an element to the stack
void push(int data) {
    if(IsFull()) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = data;
    }
}

// Function to display the stack
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for(int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main()
{
  printf("\n HARSH D \n");
    // Push elements to the stack until it is full
    for(int i = 0; i < MAXSIZE; i++) {
        push(i);
    }

    // Check if the stack is full
    if(IsFull()) {
        printf("The stack is full.\n");
    } else {
        printf("The stack is not full.\n");
    }

    // Display the stack
    display();

    return 0;
}
