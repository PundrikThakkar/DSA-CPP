#include<iostream>
using namespace std;

int main(){
    // declaration

    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    cout << "Address of ptr1 : " << &ptr1 << endl;
    cout << "Address of ptr1 : " << ptr2 << endl;
    cout << "Value of ptr1 : " << ptr1 << endl;
    cout << "Value of ptr1 : " << *ptr2 << endl;
    cout << "Value of ptr1 : " << &i << endl;
    cout << "Address of i : " << &i << endl;
    cout << "Address of i : " << ptr1 << endl;
    cout << "Address of i : " << *ptr2 << endl;
    cout << "Value of i : " << **ptr2 << endl;
    cout << "Value of i : " << i << endl;
    cout << "Value of i : " << *ptr1 << endl;
}