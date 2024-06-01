#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = {'a', 'b', 'c', 'd', 'e'};

    cout << "arr gives the address of first block of array : -> " << arr << endl;
    cout << "ch gives the full array : -> " << ch << endl;

    // Explaination: cout function works differently for int array and character array. In case of int array we know the name of array return the address of first block of array. But in case of character array , the name of array works like its starts from that first memory address until it doesn't found the terminator.

    // This also works same in below case
    char *c = &ch[0];
    cout << c << endl;

    // What if it doesn't get the terminator
    char temp = 'z';
    char *p = &temp;
    cout << "While it doesn't get terminator :-> " << p << endl;
}