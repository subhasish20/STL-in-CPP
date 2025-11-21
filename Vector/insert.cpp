#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.insert(vec.begin() + 1, 15);  // Insert 15 at the second position

    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}
