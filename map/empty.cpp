//empty() — Check whether map is empty (O(1))
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    if (mp.empty())
        cout << "Map is empty\n";

    mp[1] = "Apple";

    if (!mp.empty())
        cout << "Map is not empty";

    return 0;
}
