#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    cout << "Size of stack before push: " << s.size() << endl;  // Should print 0

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Size of stack after push operations: " << s.size() << endl;  // Should print 3

    s.pop();  // Removes the top element (30)

    cout << "Size of stack after pop operation: " << s.size() << endl;  // Should print 2

    return 0;
}
