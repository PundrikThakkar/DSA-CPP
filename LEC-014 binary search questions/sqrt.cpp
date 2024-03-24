#include<iostream>
using namespace std;


int integer_root(int n){
    int s = 0;
    int e = n - 1;

    int ans = -1;

    while(s<=e){
        int mid = s + (e - s) / 2;

        if(mid*mid == n){
            return mid;
        }else if(mid*mid <n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }

    return ans;
}

double squre_root(int n,int precision){

    int integer_part = integer_root(n);

    double ans = integer_part;
    double factor = 1;

    for (int i = 0; i < precision;i++){
        factor = factor / 10;

        for (double j = ans; j * j < n;j=j+factor){
            ans = j;
        }
    }

    return ans;
}

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;

    int precision;
    cout << "Enter the digits till how much you want precision:";
    cin >> precision;

    double ans = squre_root(n,precision);

    cout << "Your root of " << n << " = " << ans;
}