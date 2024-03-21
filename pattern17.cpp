#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        int space = n - i;
        while(j<=n){
            if(space>0){
                cout << " ";
            }else{
                cout << "*";
            }
            j++;
            space--;
        }
        i++;
        cout << endl;
    }
}