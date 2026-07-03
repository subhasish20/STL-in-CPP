//begin() — Iterator to first element (O(1))
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[2] = "Banana";
    mp[1] = "Apple";
    mp[3] = "Mango";

    auto it = mp.begin();

    cout << it->first << " " << it->second << endl;

    return 0;
}
