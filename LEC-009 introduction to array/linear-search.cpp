#include<iostream>
using namespace std;

int getIndex(int arr[],int size,int key){

    for (int i = 0; i < size;i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}

int main(){
    int size;
    int key;
    int arr[100000];
    cout << "Enter the size of array:";
    cin >> size;

    cout << "Enter the elements of array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

        cout << "Enter the element you want to find:";
        cin >> key;

        int present_at = getIndex(arr, size, key);

        cout << (present_at == -1 ? "Error: The element you are searching for is not in present in this array." : "The element is present at index : " + to_string(present_at)) << endl;
}