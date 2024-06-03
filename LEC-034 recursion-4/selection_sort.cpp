#include <iostream>
using namespace std;

int minIndex(int *arr,int s, int e){
    if(s==e){
        return s;
    }

    int k = minIndex(arr, s + 1, e);
    return arr[s] > arr[k] ? k : s;
}

void selectionSort(int *arr,int s,int n){

    if(s==n){
        return;
    }

    int k = minIndex(arr, s, n-1);

    if(k!=s){
        swap(arr[k], arr[s]);
    }
    selectionSort(arr, s + 1, n);
}

int main(){
    int arr[7] = {2, 3, 1, 5, 4, 7, 6};
    selectionSort(arr, 0, sizeof(arr) / sizeof(int));

    for (int i = 0; i < 7;i++){
        cout << arr[i] << " ";
    }
}