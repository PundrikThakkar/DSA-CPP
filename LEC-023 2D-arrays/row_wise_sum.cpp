#include<iostream>
using namespace std;

void rowSum(int arr[][4],int row,int col){
    int sum = 0;
    cout << "<-------- Row wise sum -------->" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col;j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
    return;
}

int main(){
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
    rowSum(arr, 3, 4);
}