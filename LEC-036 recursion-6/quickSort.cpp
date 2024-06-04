#include<iostream>
using namespace std;

int pivot(int *arr,int s,int e){
    int cnt = 0;
    int pivot = arr[s];

    for (int i = s; i <= e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    // handling left and right part.

    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }

    //find pivot index.
    int p = pivot(arr, s, e);

    //sorting left and right part
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){
    int arr[5] = {3, 2, 4, 1, 5};

    quickSort(arr, 0, 4);

    for (int i = 0; i < 5;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}