// Queue opeartions EnQueue
#include <stdio.h>
#define MAXSIZE 10 // Define the maximum size of the queue

int queue[MAXSIZE];
int front = 0;
int rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front > rear;
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1; // Return -1 to indicate queue underflow
    } else {
        int data = queue[front]; // Get the front element
        front++; // Increment front index
        return data; // Return the dequeued element
    }
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
    int choice, data;

    do {
        printf("\nChoose an option:\n");
        printf("1. Enqueue element\n");
        printf("2. Dequeue element\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Enqueue operation
                printf("Enter the element to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                // Dequeue operation
                if (!isEmpty()) {
                    int dequeuedValue = dequeue();
                    printf("Dequeued: %d\n", dequeuedValue);
                }
                break;
            case 3:
                // Display operation
                display();
                break;
            case 4:
                // Exit the program
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
