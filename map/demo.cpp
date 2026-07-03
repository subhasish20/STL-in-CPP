#include<iostream>
#include<map>
#include <string>
using namespace std;

int main() {
    map<int, string> mp; // map<key_type, value_type>

    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Mango";

    cout << mp[1] << endl;
    cout << mp[2] << endl;
    cout << mp[3] << endl;

    return 0;
}
