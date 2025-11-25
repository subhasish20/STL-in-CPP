#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(vec.begin(), vec.end());  // Reverses the order of elements

    cout << "Reversed vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
