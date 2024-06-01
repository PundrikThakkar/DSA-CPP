#include<iostream>
using namespace std;

int main(){
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Address of first memory block of array :-> " << arr << endl;
    cout << "Address of first memory block of array :-> " << &arr[0] << endl;
    cout << "Address of first memory block of array :-> " << &arr << endl;

    cout << "value at index 0 : " << arr[0] << endl;
    cout << "value at index 0 : " << *arr << endl;

    // formula: arr[i]= *(arr+i). arr[i]=i[arr];

    cout << "Value at index 2 is : " << arr[2] << endl;
    cout << "Value at index 2 is : " << *(arr + 2) << endl;
    cout << "Value at index 2 is : " << 2 [arr] << endl;

    // sizeof() operator
    int temp[10];
    int *ptr = temp;
    cout << "Size of array is : -> " << sizeof(temp) << endl;
    cout << "Size of array block is :-> " << sizeof(*ptr) << endl;
    cout << "Size of address block is : -> " << sizeof(ptr) << endl;

    // Content of symbol table cannot be changed.
    //  we can't do temp=temp+1; this will throw error. but instead of this we can do
    ptr = ptr + 1;
    cout << "Value stored at next index is : " << *ptr << endl;// this is garbage value because we didn't assign value to array yet.

    
}