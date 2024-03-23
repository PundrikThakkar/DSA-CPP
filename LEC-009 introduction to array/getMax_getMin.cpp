#include<iostream>
using namespace std;

int getMax(int arr[],int size){
    int maxi = INT_MIN;

    for (int i = 0; i < size;i++){
        maxi = max(maxi,arr[i]);
    }

    return maxi;
}

int getMin(int arr[],int size){
    int mini = INT_MAX;

    for (int i = 0; i < size;i++){
        mini = min(mini, arr[i]);
    }

    return mini;
}

int main(){

    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int arr[100000];

    cout << "Enter the elements of array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum element of array: " << getMax(arr, size) << endl;
    cout << "Minimum element of array: " << getMin(arr, size) << endl;
}