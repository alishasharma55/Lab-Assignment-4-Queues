#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    queue<int> q;

    cout << "Enter queue elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    // Queue should have even number of elements
    if (n % 2 != 0) {
        cout << "Number of elements must be even.";
        return 0;
    }

    queue<int> firstHalf;

    // Store first half
    for (int i = 0; i < n / 2; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    // Interleave first half and second half
    while (!firstHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(q.front());
        q.pop();
    }

    cout << "Interleaved queue: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
