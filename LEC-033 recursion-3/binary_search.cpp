#include<iostream>
using namespace std;

void binarySearch(int *arr,int target,int s,int e){
    if (s > e)
    {
        cout << "NOT PRESENT" << endl;
        return;
    }
    int mid = (s + e) / 2;
    if (arr[mid] == target)
    {
        cout << "PRESENT AT INDEX :-> " << mid << endl;
        return;
    }
    else if (arr[mid] < target)
    {
        binarySearch(arr, target, mid + 1, e);
    }
    else
    {
        binarySearch(arr, target, s, mid-1);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    binarySearch(arr, 0, 0, (sizeof(arr) / sizeof(int)) - 1);
    return 0;
}