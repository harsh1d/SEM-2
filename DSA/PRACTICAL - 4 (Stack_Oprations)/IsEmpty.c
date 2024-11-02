// Stack opeartions IsEmpty
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the stack

int stack[MAXSIZE];
int top = -1;

// Function to check if the stack is empty
int IsEmpty() {
    if(top == -1)
        return 1; // The stack is empty
    else
        return 0; // The stack is not empty
}

// Function to push an element to the stack
void push(int data) {
    if(top == MAXSIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = data;
    }
}

// Function to pop an element from the stack
int pop() {
    if(IsEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main()
{
  printf("\n HARSH D \n");
    // Push elements to the stack
    push(10);
    push(20);
    push(30);

    // Check if the stack is empty
    if(IsEmpty()) {
        printf("The stack is empty.\n");
    } else {
        printf("The stack is not empty.\n");
    }

    // Pop all elements to empty the stack
    pop();
    pop();
    pop();

    // Check again if the stack is empty
    if(IsEmpty()) {
        printf("The stack is now empty.\n");
    } else {
        printf("The stack is still not empty.\n");
    }

    return 0;
}

