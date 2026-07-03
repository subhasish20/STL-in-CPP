//swap() — Swap two maps (O(1))
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp1, mp2;

    mp1[1] = "Apple";
    mp1[2] = "Banana";

    mp2[3] = "Mango";
    mp2[4] = "Orange";

    mp1.swap(mp2);

    cout << "Map 1:\n";
    for (auto x : mp1)
        cout << x.first << " " << x.second << endl;

    cout << "\nMap 2:\n";
    for (auto x : mp2)
        cout << x.first << " " << x.second << endl;

    return 0;
}
