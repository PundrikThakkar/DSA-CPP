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
            if(j>=i){
                cout << "*";
            }else{
                cout << " ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
}