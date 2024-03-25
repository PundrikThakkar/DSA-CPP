#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(4);
    d.push_back(2);
    d.push_back(48);
    d.push_front(88);
    d.push_front(74);

    cout << "deque before pop 0 elements:";
    for(int i:d){
        cout << i << " ";
    }

    cout << endl;

    d.pop_front();
    d.pop_back();

    cout << "deque after pop from front and back:";
    for(int i:d){
        cout << i << " ";
    }

    cout << "Size of deque:" << d.size() << endl;

    cout << "Front element of deque:" << d.front() << endl;
    cout << "Last element of deque:" << d.back() << endl;

    d.erase(d.begin(), d.end());


    cout << (d.empty() ? "deque is empty" : "deque is not empty" )<< endl;

    return 0;
}