#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    s.push(10);  // Adds 10 to the top of the stack
    s.push(20);  // Adds 20 to the top of the stack
    s.push(30);  // Adds 30 to the top of the stack

    // Printing the top element after push operations
    cout << "Top element after push operations: " << s.top() << endl;  // Should print 30
    return 0;
}
