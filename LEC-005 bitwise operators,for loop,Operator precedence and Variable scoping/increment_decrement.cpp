#include<iostream>
using namespace std;

int main(){

    // pre-increment : first increment then use -> ++x
    int i = 2;
    int a = ++i;
    cout << "Value of a = " << a << endl;
    cout << "Value of i = " << i << endl;

    // post-increment: first use then increment -> x++
    int j = 4;
    int b = j++;
    cout << "Value of b = " << b << endl;
    cout << "Value of j = " << j << endl;

    // pre-decrement: first decrement then use -> --x
    int k = 3;
    int c = --k;
    cout << "Value of c = " << c << endl;
    cout << "Value of k = " << k << endl;

    // post-decrement: first use then decrement -> x--
    int l = 4;
    int d = l++;
    cout << "Value of d = " << d << endl;
    cout << "Value of l = " << l << endl;
}