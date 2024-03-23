#include<iostream>
using namespace std;

int first_occurance(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if(arr[mid]==key){
            ans = mid;
            if(arr[mid-1]==key){
                e = mid - 1;
            }else{
                return ans;
            }
        }else if(arr[mid]>key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return ans;
}

int last_occurance(int arr[],int size,int key){

    int s = 0;
    int e = size - 1;

    int ans = -1;

    while(s<=e){
        int mid = s + (e - s) / 2;

        if(arr[mid]==key){
            ans = mid;
            if (arr[mid + 1] == key)
            {
                s = mid + 1;
            }else{
                return ans;
            }
        }else if(arr[mid]>key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return ans;
}

int total_occurance(int arr[],int size,int key){

    int ans = last_occurance(arr, size, key) - first_occurance(arr, size, key) + 1;
    return ans;
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
    cout << "Enter the value of element that you wanna find:";
    cin >> key;

    int firstOccurance = first_occurance(arr, size, key);
    int lastOccurance = last_occurance(arr, size, key);
    int totalOccurance = total_occurance(arr, size, key);

    cout << "First occurance of " << key << " = " << firstOccurance << endl;
    cout << "Last occurance of " << key << " = " << lastOccurance << endl;
    cout << "Total occurance of " << key << " = " << totalOccurance << endl;
}