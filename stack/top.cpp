#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    // Accessing the top element
    cout << "Top element: " << s.top() << endl;  // Should print 30

    return 0;
}
