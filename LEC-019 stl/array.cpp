#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int, 5> a = {3, 2, 5, 1, 4};

    int size = a.size();
    cout << "Size of array -> " << size << endl;

    cout << "Front element of array: " << a.front() << endl;
    cout << "Last element of array: " << a.back() << endl;

    cout << "Element at index 3 : " << a.at(3) << endl;

    return 0;
}