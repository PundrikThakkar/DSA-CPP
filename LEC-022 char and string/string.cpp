#include<iostream>
using namespace std;

int main(){
    string str = "pundrik";
    str.append(" narendrakumar ");
    str.push_back('s');
    str.pop_back();
    cout << "length of string is :-> " << str.length() << endl;
    cout << "the part is starting at index :-> " << str.find("rendrakumar") << endl;
    cout << str;
}