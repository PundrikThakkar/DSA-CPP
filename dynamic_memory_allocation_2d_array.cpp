#include<iostream>
using namespace std;

int main(){
    // declaration
    int row, col;
    cin >> row >> col;
    int **arr = new int *[row];

    for (int i = 0; i < row;i++){
        arr[i] = new int[col];
    };

    //input in 2d array
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cin >> arr[i][j];
        }
    }

    //output
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    // free the memory
    for (int i = 0; i < row;i++){
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}