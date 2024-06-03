#include<iostream>
using namespace std;

int aPowerB(int a,int b){

    if(b==0){
        return 1;
    }

    if(b&1){
        int ans = a * aPowerB(a, b / 2) * aPowerB(a, b / 2);
        return ans;
    }
    else
    {
        int ans = aPowerB(a, b / 2) * aPowerB(a, b / 2);
        return ans;
    }
}

int main(){
    int a = 3;
    int b = 3;
    cout << aPowerB(a, b);
}