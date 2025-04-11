#include <queue>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // Inserting elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Printing front and rear (back)
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;

    // Printing and removing all elements
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop(); // <- you forgot semicolon here
    }

    return 0;
}
