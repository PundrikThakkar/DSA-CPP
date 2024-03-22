#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int remainder = n & 1;
    switch (remainder)
    {
        case 0:{
            cout << "EVEN!";
            break;
        }
        case 1:{
            cout << "ODD!";
        }
        default:{
            cout << "Enter valid number";
        }
    }
    return 0;
}