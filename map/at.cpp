//at() — Access element (O(log n))

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";

    cout << mp.at(1) << endl;
    cout << mp.at(2) << endl;

    return 0;
}
