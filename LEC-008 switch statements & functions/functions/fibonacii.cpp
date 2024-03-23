#include<iostream>
using namespace std;

int fibonacii(int n){
    int a = 0, b = 1;
    int nth_term = 0;
    
    if(n==2){
        return 1;
    }
    
    for (int i = 3; i <= n;i++){
        nth_term = a + b;
        a = b;
        b = nth_term;
    }


    return nth_term;
}

int main(){

    int n;
    cout << "Enter the number of n:";
    cin >> n;

    int nth_term = fibonacii(n);
    cout << n << "th term of fibonacci series = " << nth_term << endl;
}