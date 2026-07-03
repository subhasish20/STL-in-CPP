//operator[] — Access/Insert element (O(log n))

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";

    cout << mp[1] << endl;

    // Inserts key 3 automatically
    cout << mp[3] << endl;

    cout << "Size = " << mp.size() << endl;

    return 0;
}
