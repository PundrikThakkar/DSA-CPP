#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;

    

    while(s<=e){

        int mid = s + (e - s) / 2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return -1;
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

    int key;
    cout << "Enter the element you want to find:";
    cin >> key;

    int index = binary_search(arr, size, key);

    cout << (index == -1 ? "Error: Element not found!" : "Element present at index:" + to_string(index)) << endl;

}