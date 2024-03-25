#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    cout << "Elements of list:";
    for (int i : l)
    {
        cout << i << ",";
    }

    cout << endl;

    l.push_back(5);
    l.push_back(3);

    l.pop_back();
    l.pop_front();

    l.erase(l.begin());

    cout << "Size of list :-> " << l.size() << endl;

    cout << "Front element of list:" << l.front() << endl;
    cout << "Last element of list:" << l.back() << endl;

    return 0;
}