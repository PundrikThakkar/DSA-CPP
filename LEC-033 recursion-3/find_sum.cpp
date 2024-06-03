#include<iostream>
using namespace std;

int sumArray(int *arr,int s,int n){
    if(s==n-1){
        return arr[s];
    }
    return arr[s] + sumArray(arr, s + 1, n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
   int sum = sumArray(arr, 0, sizeof(arr) / sizeof(int));
   cout << sum << endl;
   return 0;
}