#include <iostream>
#include <queue>
using namespace std;

queue<int> q1, q2;

// Push operation
void push(int x) {
    // Insert new element into q2
    q2.push(x);

    // Move all elements from q1 to q2
    while (!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }

    // Swap q1 and q2
    swap(q1, q2);

    cout << x << " pushed into stack.\n";
}

// Pop operation
void pop() {
    if (q1.empty()) {
        cout << "Stack Underflow! Stack is empty.\n";
        return;
    }

    cout << q1.front() << " popped from stack.\n";
    q1.pop();
}

// Peek operation
void peek() {
    if (q1.empty()) {
        cout << "Stack is empty.\n";
    }
    else {
        cout << "Top element = " << q1.front() << endl;
    }
}

// Display operation
void display() {
    if (q1.empty()) {
        cout << "Stack is empty.\n";
        return;
    }

    queue<int> temp = q1;

    cout << "Stack elements: ";

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n===== STACK USING TWO QUEUES =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
