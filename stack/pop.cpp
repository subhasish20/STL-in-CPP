#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element before pop: " << s.top() << endl;  // Should print 30

    s.pop();  // Removes the top element (30)

    cout << "Top element after pop: " << s.top() << endl;  // Should print 20
    return 0;
}
