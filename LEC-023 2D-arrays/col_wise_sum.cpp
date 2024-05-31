#include<iostream>
using namespace std;

void colSum(int arr[][4],int row,int col){
    int sum = 0;
    cout << "<---- Column wise sum ---->" << endl;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row;i++){
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
    return;
}

int main(){
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
    colSum(arr, 3, 4);
    return 0;
}