#include<iostream>
using namespace std;

void quickSort(int *arr, int n)
{
    if(n==1){
        return;
    }
    for (int i = 0; i < n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    quickSort(arr, n - 1);
}

int main(){
    int arr[7] = {2, 1, 3, 5, 4, 6, 7};
    quickSort(arr, 7);

    for (int i = 0; i < 7;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}