// Queue opeartions IsFull
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the queue

int queue[MAXSIZE];
int front = 0;
int rear = -1;

// Function to check if the queue is full
int IsFull() {
    return rear == MAXSIZE - 1;
}

// Function to add an element to the queue
void enqueue(int data) {
    if (IsFull()) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) { // If queue is initially empty
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("%d enqueued to queue\n", data);
    }
}

// Function to display the queue
void display()
{
  int i;
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for ( i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
  printf("\n HARSH D \n");
    int data;

    // Enqueue elements to the queue dynamically
    while (!IsFull()) {
        printf("Enter element to enqueue (or -1 to stop): ");
        scanf("%d", &data);
        if (data == -1) {
            break;
        }
        enqueue(data);
    }

    // Check if the queue is full
    if (IsFull()) {
        printf("The queue is full.\n");
    } else {
        printf("The queue is not full.\n");
    }

    // Display the queue
    display();

    return 0;
}
