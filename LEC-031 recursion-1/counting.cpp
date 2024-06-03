#include<iostream>
using namespace std;

void printCounting(int n){
    if(n==0){
        return;
    }
    printCounting(n - 1);

    cout << n << endl;
}

int main(){
    printCounting(7);
}