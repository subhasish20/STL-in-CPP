#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(5);
    q.push(15);
    q.push(25);

    cout << "Front element: " << q.front() << endl;

    return 0;
}
