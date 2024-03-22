#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    if(n<0){
        cout << "Number is negative.Input valid number";
        exit(0);
    }
    else if (n == 0)
    {
        cout << "Number is zero.Input valid number";
        exit(0);
    }
    else if (n == 1)
    {
        cout << "Number is 1.Input valid number";
        exit(0);
    }

    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << "PRIME";
    }else{
        cout << "NOT PRIME";
    }
    return 0;
}