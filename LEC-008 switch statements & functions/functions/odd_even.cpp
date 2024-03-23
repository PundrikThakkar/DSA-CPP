#include<iostream>
using namespace std;

bool isEven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;

    bool result = isEven(n);

    cout<<((result)?"Number is even":"Number is odd")<<endl;
}