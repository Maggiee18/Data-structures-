#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d enqueued successfully.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        printf("%d dequeued successfully.\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void findElement(int value) {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot find element.\n");
    } else {
        int i;
        for (i = front; i <= rear; i++) {
            if (queue[i] == value) {
                printf("%d found at position %d.\n", value, i-front+1);
                return;
            }
        }
        printf("%d not found in the queue.\n", value);
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6); 

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); 

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    findElement(3); 

    return 0;
}
