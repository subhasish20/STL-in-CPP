//emplace() — Construct element in map format directly (O(log n))

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp.emplace(1, "Apple");
    mp.emplace(2, "Banana");
    mp.emplace(3, "Mango");

    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    return 0;
}
