// Queue opeartions EnQueue
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the queue

int queue[MAXSIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == MAXSIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to add an element to the queue
void enqueue(int data) {
    if (isFull()) {
        printf("Queue Overflow\n");
    } else {
        if (isEmpty()) {
            front = 0; // If the queue is empty, set front to 0
        }
        rear++;
        queue[rear] = data; // Add the element to the queue
        printf("%d enqueued to queue\n", data);
    }
}

// Function to display the queue
void display()
{
    int i;
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for ( i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    printf("\n HARSH D \n");
    int data;
    char choice;

    do {
        printf("Enter the element to enqueue: ");
        scanf("%d", &data);

        // Enqueue the element
        enqueue(data);

        printf("Do you want to enqueue more elements? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Display the queue
    display();

    return 0;
}
