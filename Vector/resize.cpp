#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {10, 20, 30};
    vec.resize(5, 50);  // Resizes the vector to 5 elements, adding 50 to the new positions

    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}
