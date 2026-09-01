#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue() {
    int value;

    if (rear == MAX - 1) {
        cout << "Queue Overflow! Queue is full.\n";
    }
    else {
        cout << "Enter value to enqueue: ";
        cin >> value;

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into queue.\n";
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Queue is empty.\n";
    }
    else {
        cout << queue[front] << " deleted from queue.\n";
        front++;

        // Reset queue when it becomes empty
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

// isEmpty operation
void isEmpty() {
    if (front == -1)
        cout << "Queue is Empty.\n";
    else
        cout << "Queue is not Empty.\n";
}

// isFull operation
void isFull() {
    if (rear == MAX - 1)
        cout << "Queue is Full.\n";
    else
        cout << "Queue is not Full.\n";
}

// Display operation
void display() {
    if (front == -1) {
        cout << "Queue is Empty.\n";
    }
    else {
        cout << "Queue elements are: ";

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

// Peek operation
void peek() {
    if (front == -1) {
        cout << "Queue is Empty. No front element.\n";
    }
    else {
        cout << "Front element = " << queue[front] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== SIMPLE QUEUE MENU =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                isEmpty();
                break;

            case 4:
                isFull();
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
