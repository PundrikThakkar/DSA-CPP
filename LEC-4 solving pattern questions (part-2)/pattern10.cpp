#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        char ch = 'A';
        while(j<=n){
            cout << ch << " ";
            ch++;
            j++;
        }
        i++;
        cout << endl;
    }
}