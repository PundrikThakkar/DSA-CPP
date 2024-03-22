#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of greetings you want:";
    cin >> n;
    for(int i = 1 /*initialization*/; i <= n /*condition*/; i++ /*update*/){
        cout << "Hello!" << endl;
    }
}