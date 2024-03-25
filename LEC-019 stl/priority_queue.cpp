#include<iostream>
#include<queue>
using namespace std;

int main(){

    // max-heap
    priority_queue<int> maxi;

    //min - heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);

    cout << "Size of maxi -> " << maxi.size() << endl;

    cout << "Elements of max heap:";
    int size1 = maxi.size();
    for (int i = 0; i < size1;i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Size of mini -> " << mini.size() << endl;
    int size2 = mini.size();
    cout << "Elements of mini:";

    for (int i = 0; i < size2; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    return 0;
}