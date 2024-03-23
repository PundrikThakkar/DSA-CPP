#include<iostream>
using namespace std;

int count_set_bits(int n){
    int count = 0;
    while (n != 0)
    {
        int bit = n & 1;
        count += (bit ? 1 : 0);
        n = n >> 1;
    }

    return count;
}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int number_of_set_bits = count_set_bits(n);

    cout << "Number of set bits in " << n << " = " << number_of_set_bits;
}