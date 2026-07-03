//count() — Check if key exists (O(log n)) provide the answe in 0 or 1

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";

    if (mp.count(2))
        cout << "Key exists";
    else
        cout << "Key doesn't exist";

    return 0;
}

/*
 #include <iostream>
 #include <map>
 using namespace std;

 int main() {
     map<int, string> mp;

     mp[1] = "Apple";
     mp[2] = "Banana";

     cout << mp.count(2) << endl;
     cout << mp.count(5);
 }
 */
