#include<iostream>
using namespace std;

//Q .Reverse an array (i/p -> {3,4,5,1,9} : o/p -> {9,1,5,4,3})

void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing is done!";
}

void reverseArray(int arr[],int size){
    for (int i = 0; i < size/2;i++){
        swap(arr[i], arr[size - i - 1]);
    }
}

int main(){
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int arr[10000];

    cout << "Enter the element of array:";

    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    reverseArray(arr, size);
    printArray(arr, size);
}