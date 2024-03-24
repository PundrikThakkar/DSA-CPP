#include<iostream>
using namespace std;

int pivot(int arr[],int size){
    int s = 0;
    int e = size - 1;

    while(s<e){
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int findElement(int arr[],int size,int key){
    int pivot_index = pivot(arr, size);

    int s = 0;
    int e = size - 1;

    if(arr[pivot_index]<=key && arr[e]>=key){
        s = pivot_index;
    }else{
        e = pivot_index - 1;
    }

    int ans=0;

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
    cout << "Enter the value of key you want to find:";
    cin >> key;

    int ans = findElement(arr, size, key);

    cout << ((ans==-1)?"Your key is present at index = " + to_string(ans) : "Error 404 : NOT FOUND ");

    return 0;
}