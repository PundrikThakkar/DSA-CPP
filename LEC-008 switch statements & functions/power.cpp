#include<iostream>
using namespace std;

int main(){
    int n, power;
    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the power:";
    cin >> power;

    int ans = 1;
    for (int i = 1; i <= power; i++)
    {
        ans *= n;
    }

    cout << "Ans -> " << ans;
    return 0;
}