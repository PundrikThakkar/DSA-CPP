#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int nCr(int n,int r){
    int n_factorial = fact(n);
    int r_factorial = fact(r);

    int n_minus_r_factorial = fact(n - r);

    int nCr = n_factorial / (r_factorial * n_minus_r_factorial);
    return nCr;
}

int main(){
    int n,r;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "Enter the value of r:";
    cin >> r;

    int ans = nCr(n, r);

    cout << n << "C" << r << " = " << ans << endl;
}