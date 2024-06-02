#include<iostream>
using namespace std;

int main(){
    // Static Allocation: Use stack memory. Which is very small
    /* Bad practice:
    int i;
    cin>>i;
    int arr[i];
    */

    // Dynamic allocation: Use heap memory. Which is large. Uses new key word. And it returns address of that heap memory block

    /* Ex:
    char *ch=new char; :-> 8 byte for pointer in stack . 1 byte for char data type in heap.
    int *i=new int; : -> 8 byte for pointer in stack. 4 byte for int data type in heap
    */
    // Good practice.

    int i;
    cin >> i;
    int *arr = new int[i]; // i*4 bytes in heap for int array. 8 bytes for pointer in stack.

    // To delete the allocated pointer;
    // for charater,int etc.

    int *ptr1 = new int;
    delete ptr1;

    // for array:
    delete[] arr;
}