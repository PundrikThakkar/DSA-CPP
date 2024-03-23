#include<iostream>
using namespace std;

bool isPrime(int n){
    bool isPrime = true;
    
    for (int i = 2; i <= n / 2;i++){
        if(n%i==0){
            isPrime = false;
        }
    }

    return isPrime;
}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    if(n<=1){
        cout << "Error : Enter the valid Number!" << endl;
        exit(0);
    }

    bool result = isPrime(n);

    cout << (result ? "Number is prime" : "Number is non Prime") << endl;

    return 0;
}