#include<iostream>
using namespace std;

void noUpdate(int *ptr){
    ptr = ptr + 1;
}

void update(int *ptr){
    *ptr = *ptr + 1;
}

int main(){
    int a = 3;
    int *ptr1 = &a;

    cout << "<---When it doesn't update the value--->" << endl;
    cout << "Before update:" << *ptr1 << endl;
    noUpdate(ptr1);
    cout << "After update:" << *ptr1 << endl;

    cout << endl;

    int b = 3;
    int *ptr2 = &b;
    cout << "<---When it update the value--->" << endl;
    cout << "Before update:" << *ptr2 << endl;
    update(ptr2);
    cout << "After update:" << *ptr2 << endl;
}