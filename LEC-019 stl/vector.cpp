#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(29);
    v.push_back(16);

    v.pop_back();

    cout << "Size of vector:->" << v.size() << endl;
    cout << "Capacity of vector:->" << v.capacity() << endl;

    cout << "Front element of vector:->" << v.front() << endl;
    cout << "Last element of vector:->" << v.back() << endl;

    cout << "Element at index 3:->" << v.at(3) << endl;

    // Sorting vector
    sort(v.begin(), v.end());

    cout << "Vector after sorting: ";

    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }

    

    bool isEmpty=v.empty();

    cout << (isEmpty ? "Vector is not empty" : "Vector is empty") << endl;

    return 0;
}