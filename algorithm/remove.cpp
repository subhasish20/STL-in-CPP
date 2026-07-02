#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(5);

    copy(v1.begin(), v1.end(), v2.begin());

    for (int x : v2)
        cout << x << " ";

    return 0;
}
