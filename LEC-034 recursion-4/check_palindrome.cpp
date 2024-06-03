#include<iostream>
using namespace std;

void checkPalindrome(string s,int i,int j){
    if(i>j){
        cout << "Palindrome" << endl;
        return;
    }

    if(s[i]!=s[j]){
        cout << "NOT palindrome" << endl;
        return;
    }

    checkPalindrome(s, i + 1, j - 1);
}

int main(){
    string s = "abcba";
    checkPalindrome(s,0,s.size()-1);
}