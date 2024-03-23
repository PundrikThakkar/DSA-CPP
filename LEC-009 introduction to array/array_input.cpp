#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[1000];
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    // input with by doing spaces.
    cout << "Enter the elements of array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, size);
}