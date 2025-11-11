#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    int size, value; 
    cout<<"Enter how many elements you want to store :";
    cin>>size;
    cout<<"Enter the elements :\n";
    for(int i = 0; i < size; i++)
    {
        cin>>value;
        vec.push_back(value);
    }
    cout<<"The elements are : \n";
    for(int i = 0; i < size; i++)
    {   
        cout<<vec[i]<<endl;
    }


    return 0;
}