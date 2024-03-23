#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main(){

    // Declaration : data_type array_name[size]={array elments};
    int arr1[5] = {5, 2, 3, 5, 9};
    cout << "Address of first element of array -> " << arr1 << endl;

    // Initialization:

    int arr2[] = {3, 4, 5, 1};// it will automatically predict the size of array. we don't need to provide size in []

    // every element will be zero.
    int arr3[10] = {0};
    int arr4[10] = {};

    // Q. make an array of size 10 with all values of 1;

    //Wrong answer
    int arr5[10] = {1};// it will make first element 1 and every other elements will be with garbage value.

    // Correct answer
    int arr6[10] = {[0 ... 9] = 1}; // here from index 0 to 9 will have value 1.

    int arr7[10] = {4, 2, 5};// here first 3 elements have value 4 , 2 and 5 every other elements will have garbage value.

    // accessing array elements : array_name[index] . index starts with 0 upto size-1

    int arr8[5] = {4, 6, 2, 5, 6};

    cout << "First element -> " << arr8[0] << endl;
    cout << "Second element -> " << arr8[1] << endl;
    cout << "Third element -> " << arr8[2] << endl;
    cout << "Fourth element -> " << arr8[3] << endl;
    cout << "Fifth element -> " << arr8[4] << endl;

    // accessing elements out of size: Error: Array index out of bound;
    // cout << arr8[5] << endl;

    printArray(arr8, 5);
    printArray(arr6, 10);

    // Size of array:
    
    // 1. sizeof(array)/sizeof(data_type)

    int size1 = sizeof(arr8) / sizeof(int); // this will return full size of array even if there are element are present or not in declared size;

    // 2. for loop
    int size2 = 0;
    for (auto i : arr8)
    {
        size2++;
    }

    // 3. end(arr)-begin(arr)
    int size3 = end(arr8) - begin(arr8);

    // 4. arr.size();
    //int size4 = arr1.size();// this actually use to find length of array
}