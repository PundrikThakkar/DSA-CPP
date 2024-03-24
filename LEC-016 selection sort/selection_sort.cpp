#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    cout << "The sorted array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selection_sort(int arr[],int size){

    for (int i = 0; i < size;i++){
        int minIndex = i;

        for (int j = i + 1; j < size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    printArray(arr,size);
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

    selection_sort(arr, size);

    return 0;
}