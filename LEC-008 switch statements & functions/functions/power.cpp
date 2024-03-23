#include<iostream>
using namespace std;

int power(int number,int power){
    int ans = 1;
    for (int i = 1; i <= power;i++){
        ans = ans * number;
    }

    return ans;
}

int main(){
    int n, p;
    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the power:";
    cin >> p;

    int ans = power(n, p);

    cout << "Ans -> " << ans;
    return 0;
}