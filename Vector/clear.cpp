#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vec = {10, 20, 30};
    vec.clear();  // Removes all elements

    cout << "Vector size after clear: " << vec.size() << endl;
    return 0;
}
