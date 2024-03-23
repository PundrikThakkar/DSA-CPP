#include<iostream>
using namespace std;

void reverse_alternate(int arr[],int size){
    for (int i = 0; i < size;i+=2){
        if(i<size-1){
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int arr[10000];
    cout << "Enter the elements of array:";

    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    reverse_alternate(arr, size);
    printArray(arr, size);
}