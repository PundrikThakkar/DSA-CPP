#include<iostream>
using namespace std;

int main(){
    // Reference variable: single memory has 2 or more names.

    int i = 5;
    int &j = i;

    j++;

    cout << "Value of i : " << i << endl;
    cout << "Value of j : " << j << endl;

    // This is used in pass by reference . Because in pass by value the new memory is created. also didn't update the value of original variable/main variable. but in pass by reference , no need to create new memory. It directly make change in origin variable. 
}