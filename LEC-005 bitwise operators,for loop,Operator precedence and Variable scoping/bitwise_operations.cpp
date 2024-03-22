#include<iostream>
using namespace std;

int main(){
    
    // AND : &
    // OR : |
    // NOT : !
    // XOR : ^
    // RIGHT SHIFT : >>
    // LEFT SHIFT : <<
    int a, b, n, m;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "Enter the value of m:";
    cin >> m;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "!n = " << (!n) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "Right shift of " << m << " = " << (m >> 1) << endl;
    cout << "Left shift of " << m << " = " << (m << 1) << endl;
}