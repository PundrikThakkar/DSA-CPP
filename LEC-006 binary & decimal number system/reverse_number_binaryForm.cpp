#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    int ans=0;
    while (n != 0){
        int bit = n & 1;
        ans = ans * 10 + bit;
        n = n >> 1;
    }
    cout << "The reverse binary value of given number is:" << ans;
}
