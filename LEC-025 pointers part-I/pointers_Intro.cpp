#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << "Address of 5 : " << &num << endl;
    int *ptr = &num;
    cout << "Adress : " << ptr << endl;
    cout << "Value : " << *ptr << endl;

    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;

    return 0;
}