#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {30, 10, 20, 50, 40};

    sort(vec.begin(), vec.end());  // Sorts in ascending order

    cout << "Sorted vector in ascending order : ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    sort(vec.begin(), vec.end(), greater<int>());  // Sorts in descending order 

    cout << "Sorted vector in descending order : ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
