#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;
    q.push("Love");
    q.push("babbar");
    q.push("Kumar");

    cout << "Size of queue:" << q.size() << endl;

    cout << "Elements of queue:";

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}