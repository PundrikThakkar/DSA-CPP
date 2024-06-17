#include<iostream>
using namespace std;

class Heap{
    public:
        int arr[1000];
        int size;

        Heap(){
            this->size = 0;
        }

        void insert(int arr[],int data){
            int index = size;
            size++;
            arr[index] = data;
            while(index>0){
                int parent = (index - 1) / 2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }else{
                    return;
                }
            }
        }

        void print(){
            for (int i = 0; i < size;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void deleteFromHeap(){
            if(size==0){
                cout << "Nothing to delete" << endl;
                return;
            }

            arr[0] = arr[size - 1];
            size--;

            int i = 0;
            while(i<size){
                int left = i * 2 + 1;
                int right = i * 2 + 2;
                if(left<size && arr[left]<arr[i]){
                    swap(arr[i], arr[left]);
                    i = left;
                }else if(right<size && arr[i]<arr[right]){
                    swap(arr[i], arr[right]);
                    i = right;
                }else{
                    return;
                }
            }
        }
}

void Heapify(int arr[],int n,int i){
    int largest = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;

    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }if(right<n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest!=i){
        swap(arr[largest], arr[i]);
        i = largest;
        Heapify(arr, n, i);
    }
}

void heapSort(int arr[],int n){
    int index = n - 1;

    while(index>0){
        swap(arr[index], arr[1]);
        size--;

        heapify(arr, n, 1);
    }
}