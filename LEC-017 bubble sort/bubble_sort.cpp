#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }

    return;
}

void bubble_sort(int arr[],int size){

    for (int i = 0; i < size - 1;i++){
        for (int j = 0; j < size - i - 1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

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

    bubble_sort(arr, size);

    cout << "The elements of array after sorting:";
    printArray(arr, size);
}