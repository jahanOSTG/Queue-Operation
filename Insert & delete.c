
#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

//Inserting element in queue
void insert() {
    int value;
    if (rear == MAX - 1) {
        printf("Queue is full!\n");
        return;
    }
    printf("Insert an element: ");
    scanf("%d", &value);
    if (front == -1) front = 0;
    queue[++rear] = value;
}

// Deleting element from queue
void delete() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Delete an element: %d\n", queue[front]);
    front++;
    if (front > rear) front = rear = -1;
}

// display queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++)
        printf("\t%d ", queue[i]);
    printf("\nREAR: %d\nFRONT: %d\n", queue[rear], queue[front]);
}

int main() {
    int choice;
    printf("\nQueue operations\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    do {

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
