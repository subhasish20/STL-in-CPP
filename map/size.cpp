//size() — Number of elements (O(1))

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Mango";

    cout << "Size = " << mp.size() << endl;

    return 0;
}
