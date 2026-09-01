#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    queue<char> q;
    int frequency[256] = {0};

    cout << "Enter characters: ";

    for (int i = 0; i < n; i++) {
        char ch;
        cin >> ch;

        // Increase frequency
        frequency[ch]++;

        // Add character to queue
        q.push(ch);

        // Remove repeating characters from front
        while (!q.empty() && frequency[q.front()] > 1) {
            q.pop();
        }

        // Display first non-repeating character
        if (q.empty())
            cout << "-1 ";
        else
            cout << q.front() << " ";
    }

    return 0;
}
