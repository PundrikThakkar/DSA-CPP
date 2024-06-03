#include<iostream>
using namespace std;

string reverseString(string &s,int i,int j){
    if(i>j){
        return s;
    }
    swap(s[i], s[j]);
    return reverseString(s, i + 1, j - 1);
}

int main(){
    string s = "abcdef";
    string reversedString = reverseString(s, 0, s.size() - 1);
    cout << reversedString << endl;
}