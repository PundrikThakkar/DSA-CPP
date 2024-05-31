#include<iostream>
using namespace std;

void printArray(int arr[][4],int row,int col){
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

int main(){

    // it takes input row wise.
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout << "Printing array1" << endl;
    printArray(arr1, 3, 4);

    // elements inserted manually position wise.
    int arr2[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    cout << "Printing array2" << endl;
    printArray(arr2, 3, 4);

    // take input of specific position. cin >> arr[i][j];

    // user define input row wise.
    int arr3[3][4];
    cout << "Enter the element of array row wise:->";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4;col++){
            cin >> arr3[row][col];
        }
    }
    cout << "Printing row wise array:->" << endl;
    printArray(arr3, 3, 4);

    //user define input col wise.
    int arr4[3][4];
    cout << "Enter elements of array col wise:->";
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3;row++){
            cin >> arr4[row][col];
        }
    }
    cout << "Printing col wise array:->" << endl;
    printArray(arr4, 3, 4);

    return 0;
}