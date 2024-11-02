// Queue opeartions PEAK
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the queue

int queue[MAXSIZE];
int front = 0;
int rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front > rear;
}

// Function to add an element to the queue
void enqueue(int data) {
    if (rear == MAXSIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        rear++;
        queue[rear] = data; // Add the element to the queue
    }
}

// Function to return the value at the front of the queue without removing it (peek operation)
int peek() {
    if (!isEmpty()) {
        return queue[front];
    } else {
        printf("Queue is empty\n");
        return -1; // Return -1 if the queue is empty
    }
}

int main()
{
  printf("\n HARSH D \n");
    int data;

    // Enqueue elements to the queue dynamically
    while (1) {
        printf("Enter element to enqueue (-1 to stop): ");
        scanf("%d", &data);
        if (data == -1) {
            break;
        }
        enqueue(data);
    }

    // Perform the PEEK operation
    int frontValue = peek();
    if (frontValue != -1) {
        printf("The value at the front of the queue is: %d\n", frontValue);
    }

    return 0;
}
