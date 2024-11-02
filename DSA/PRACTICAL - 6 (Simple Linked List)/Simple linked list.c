#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to insert a new node at the beginning of the linked list
void insert(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

// Function to display the elements of the linked list
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next; // Move to the next node
    }
}

int main()
{
  printf("\n HARSH D \n");
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &data);
        insert(data); // Insert data into the linked list
    }

    printf("Linked List elements: ");
    display(); // Display the linked list

    return 0;
}

