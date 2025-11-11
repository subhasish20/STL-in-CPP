#include<iostream>
#include<vector>
using namespace std;

int main() {
    int size1, size2;

    // Ask user for the size of the first vector
    cout << "Enter the size of the first vector: ";
    cin >> size1;

    vector<int> vec1;
    cout << "Enter " << size1 << " elements for the first vector:" << endl;
    for (int i = 0; i < size1; i++) {
        int element;
        cin >> element;
        vec1.push_back(element);
    }

    // Ask user for the size of the second vector
    cout << "Enter the size of the second vector: ";
    cin >> size2;

    vector<int> vec2;
    cout << "Enter " << size2 << " elements for the second vector:" << endl;
    for (int i = 0; i < size2; i++) {
        int element;
        cin >> element;
        vec2.push_back(element);
    }

    // Display the vectors before swapping
    cout << "\nBefore swapping:" << endl;
    cout << "vec1: ";
    for (int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    // Swap the vectors
    vec1.swap(vec2);

    // Display the vectors after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "vec1: ";
    for (int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
