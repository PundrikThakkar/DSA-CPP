#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count << ',';
            count--;
            j++;
        }
        i++;
        cout << endl;
    }
}