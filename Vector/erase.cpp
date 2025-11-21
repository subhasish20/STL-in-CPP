#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vec = {10, 20, 30, 40};
    vec.erase(vec.begin() + 1);  // Removes element at the second position (20)

    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}
