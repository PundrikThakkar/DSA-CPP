#include<iostream>
using namespace std;

void largestRow(int arr[][4],int row,int col){
    int largest_row_index = 0;
    int current_row_sum = 0;
    int max_row_sum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col;j++){
            current_row_sum += arr[i][j];
        }
        if(max_row_sum<current_row_sum){
            largest_row_index = i;
            max_row_sum = current_row_sum;
        }
        current_row_sum = 0;
    }

    cout << "largest row is : " << largest_row_index;
    return;
}

int main(){
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
    largestRow(arr, 3, 4);
}