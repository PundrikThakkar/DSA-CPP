#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        int spaces = n - i;
        while(j<=n){
            if(spaces>0){
                cout << " ";
            }else{
                cout << count;
                count++;
            }
            j++;
            spaces--;
        }
        i++;
        cout << endl;
    }
}