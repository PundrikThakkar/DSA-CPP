#include<iostream>
using namespace std;

// An=(3*n + 7)

int A_n(int n){
    int nth_term = (3 * n + 7);
    return nth_term;
}

int main(){
    int n;
    cout << "Enter the value n:";
    cin >> n;
    int An = A_n(n);

    cout << "A" << n << " = " << An;
}