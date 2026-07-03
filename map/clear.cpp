//clear() — Remove all elements (O(n))
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";

    cout << "Before clear: " << mp.size() << endl;

    mp.clear();

    cout << "After clear: " << mp.size() << endl;

    return 0;
}
