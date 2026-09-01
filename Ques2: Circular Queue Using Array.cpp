#include <iostream>
using namespace std;

#define MAX 5

int cqueue[MAX];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue() {
    int value;

    if ((rear + 1) % MAX == front) {
        cout << "Circular Queue is Full!\n";
    }
    else {
        cout << "Enter value to enqueue: ";
        cin >> value;

        // First element
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % MAX;
        }

        cqueue[rear] = value;

        cout << value << " inserted into circular queue.\n";
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1) {
        cout << "Circular Queue is Empty!\n";
    }
    else {
        cout << cqueue[front] << " deleted from circular queue.\n";

        // Only one element was present
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % MAX;
        }
    }
}

// isEmpty operation
void isEmpty() {
    if (front == -1)
        cout << "Circular Queue is Empty.\n";
    else
        cout << "Circular Queue is not Empty.\n";
}

// isFull operation
void isFull() {
    if ((rear + 1) % MAX == front)
        cout << "Circular Queue is Full.\n";
    else
        cout << "Circular Queue is not Full.\n";
}

// Display operation
void display() {
    if (front == -1) {
        cout << "Circular Queue is Empty.\n";
    }
    else {
        cout << "Circular Queue elements are: ";

        int i = front;

        while (true) {
            cout << cqueue[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
}

// Peek operation
void peek() {
    if (front == -1) {
        cout << "Circular Queue is Empty. No front element.\n";
    }
    else {
        cout << "Front element = " << cqueue[front] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== CIRCULAR QUEUE MENU =====\n";
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
