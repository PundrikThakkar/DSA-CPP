#include<iostream>
using namespace std;

int fibonnacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibonnacci(n - 1) + fibonnacci(n - 2);
}

int main(){
    cout << fibonnacci(0) << endl;
    cout << fibonnacci(1) << endl;
    cout << fibonnacci(4) << endl;
}