#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    
    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") << endl;  // Should print Yes

    s.push(10);
    s.push(20);

    cout << "Is the stack empty now? " << (s.empty() ? "Yes" : "No") << endl;  // Should print No

    return 0;
}
