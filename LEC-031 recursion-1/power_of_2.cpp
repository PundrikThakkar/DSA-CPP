#include<iostream>
using namespace std;

int nPowerOf2(int n){
    if (n == 0){
        return 1;
    }

    return 2 * nPowerOf2(n - 1);
}

int main(){
    cout << nPowerOf2(5);
}