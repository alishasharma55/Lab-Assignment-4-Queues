#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

// Push operation
void push(int x) {
    int size = q.size();

    q.push(x);

    // Move previous elements behind the new element
    for (int i = 0; i < size; i++) {
        q.push(q.front());
        q.pop();
    }

    cout << x << " pushed into stack.\n";
}

// Pop operation
void pop() {
    if (q.empty()) {
        cout << "Stack Underflow! Stack is empty.\n";
    }
    else {
        cout << q.front() << " popped from stack.\n";
        q.pop();
    }
}

// Peek operation
void peek() {
    if (q.empty()) {
        cout << "Stack is empty.\n";
    }
    else {
        cout << "Top element = " << q.front() << endl;
    }
}

// Display operation
void display() {
    if (q.empty()) {
        cout << "Stack is empty.\n";
        return;
    }

    queue<int> temp = q;

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
        cout << "\n===== STACK USING ONE QUEUE =====\n";
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
