#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the decimal number:";
    cin >> n;
    int temp = n;
    int ans = 0;
    int i = 0;
    while (temp != 0)
    {
        int bit = temp & 1;
        temp = temp >> 1;
        ans = bit * pow(10,i) + ans;
        i++;
    }
   
    cout << "The binary value of " << n << ":" << ans;
}