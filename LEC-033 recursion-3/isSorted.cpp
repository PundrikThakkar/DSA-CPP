#include<iostream>
using namespace std;

void isSorted(int *arr,int s,int n){
    if(s==n-1){
        cout << "SORTED" << endl;
        return;
    }
    if(arr[s]>arr[s+1]){
        cout << "NOT SORTED" << endl;
        return;
    }
    isSorted(arr, s + 1, n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 6};
    isSorted(arr, 0, sizeof(arr) / sizeof(int));
    return 0;
}