#include<iostream>
using namespace std;

int pivot(int arr[],int size){
    int s = 0;
    int e = size - 1;

    int ans = 0;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[s])
        {
            s = mid + 1;
        }else{
            e = mid;
        }
    }

    return s;
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

    int pivot_index = pivot(arr, size);

    cout << "The pivot element is present at : " << pivot_index;

    return 0;
}