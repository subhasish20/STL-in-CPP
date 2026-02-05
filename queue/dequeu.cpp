#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();

    cout << "Front element after pop: " << q.front() << endl;

    return 0;
}
