//erase() — Delete key (O(log n))

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Mango";

    mp.erase(2);

    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    return 0;
}
