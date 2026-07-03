#include <iostream>
#include <map>
using namespace std;


//insert() — Insert key-value pair (O(log n))

int main() {
    map<int, string> mp;

    mp.insert({1, "Apple"});
    mp.insert({2, "Banana"});
    mp.insert(pair<int, string>(3, "Mango"));

    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    return 0;
}
