#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the vector :";
    cin>>size;
    vector<int>vec(size);

    cout<<"The size of the vector is :"<<vec.size(); // .size() is used to find the size of the vector

    return 0;
}