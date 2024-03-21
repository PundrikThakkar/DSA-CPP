#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i + j - 2;
            j++;
            cout << ch << ' ';
        }
        cout << endl;
        i++;
    }
}