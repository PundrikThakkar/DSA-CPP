#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    if(n&1){
        cout << "The number is odd";
    }else{
        cout << "The number is even";
    }
    return 0;
}