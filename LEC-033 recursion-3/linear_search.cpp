#include<iostream>
using namespace std;

void linearSearch(int *arr,int target,int n,int i){
    if(i==n){
        cout << "NOT PRESENT" << endl;
        return;
    }
    if(arr[i]==target){
        cout << "PRESENT AT INDEX :-> " << i << endl;
        return;
    }
    linearSearch(arr, target, n, i + 1);
}

int main(){
    int arr[] = {3, 5, 2, 7, 9, 4};
    linearSearch(arr, 1, sizeof(arr) / sizeof(int), 0);
    return 0;
}