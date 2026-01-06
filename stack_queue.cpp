#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack (LIFO):" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "\nQueue (FIFO):" << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
