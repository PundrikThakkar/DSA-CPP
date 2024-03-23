#include<iostream>
using namespace std;

int getSum(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size;i++){
        sum += arr[i];
    }
    return sum;
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

    cout << "The sum of given array: " << getSum(arr, size) << endl;
}