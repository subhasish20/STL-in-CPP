#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    int val,size,remove;
    cout<<"Enter how many elements you want to store :";
    cin>>size;
    cout<<"Enter the elements :";
    for(int i = 0; i < size; i++)
    {
        cin>>val;
        vec.push_back(val);
    }
    cout<<"The elements are :";
    for(int i = 0; i < size; i++)
    {
        cout<<vec[i]<<" ";
    }

    cout<<"\nEnter how many element you want tor remove from the end :"<<endl;
    cin>>remove;
    if(vec.empty())
    {
        cout<<"vector is empty unable to remove the elements ";
    }
    else 
    {
        for(int i = 0; i < remove; i++)
        {
            vec.pop_back();
        }
    }
    cout<<"After removing the element the remaining elements are :";
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }

    return  0;
}