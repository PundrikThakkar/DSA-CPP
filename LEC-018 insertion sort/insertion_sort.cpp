#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){

    for (int i = 0; i < size;i++){
        int key = arr[i + 1];
        int j = i;

        while(j>=0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    return;
}

void printArray(int arr[],int size){

    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }

    return;
}

int main(){
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int arr[100000];
    cout << "Enter the elements of array:";
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    insertion_sort(arr, size);

    cout << "The elements of array after sorting:";
    printArray(arr, size);
}