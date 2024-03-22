#include<iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter the amount:";
    cin >> amount;

    int hundreds = 0, fifties = 0, twenties = 0, ones = 1;

    if(amount>=100){
        hundreds = amount / 100;
        amount = amount % 100;
    }
    if(amount>=50){
        fifties = amount / 50;
        amount %= 50;
    }
    if (amount >= 20)
    {
        twenties = amount / 20;
        amount %= 20;
    }
    if(amount>=1){
        ones = amount;
    }

    cout << "notes of $100 -> " << hundreds << endl;
    cout << "notes of $50 -> " << fifties << endl;
    cout << "notes of $20 -> " << twenties << endl;
    cout << "notes of $1 -> " << ones << endl;
}