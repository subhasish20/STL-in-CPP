//find() — Search key (O(log n))
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";

    auto it = mp.find(2);

    if (it != mp.end())
        cout << "Found: " << it->first << " " << it->second << endl;
    else
        cout << "Not Found";

    return 0;
}
