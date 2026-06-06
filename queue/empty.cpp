#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    if (q.empty())
        cout << "Queue is empty";
    else
        cout << "Queue is not empty";

    return 0;
}
