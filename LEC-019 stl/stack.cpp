#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("Love");
    s.push("babbar");
    s.push("Kumar");

    cout << "Top element of stack -> " << s.top() << endl;

    cout << "Size of stack:" << s.size() << endl;

    cout << (s.empty() ? "Stack is empty!" : "Stack is not empty") << endl;

    cout << "Elements of stack:";

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}