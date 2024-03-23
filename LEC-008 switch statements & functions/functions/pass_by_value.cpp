#include<iostream>
using namespace std;

// Pass by reference : when we pass any variable in argument then the function will create a copy of that variable and if there will any change in that copy it will not reflect in the main variable or original variable.

void update(int n){
    n = n + 1;
    cout << "Inside update function n = " << n << endl;
    return;
}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    cout << "Inside main function before update function n = " << n << endl;

    update(n);

    cout << "Inside main function after update function n = " << n << endl;
}