#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vec = {10, 20, 30};
    cout << "Last element using end() is just past the last element: " << *(vec.end() - 1) << endl;
    return 0;
}
