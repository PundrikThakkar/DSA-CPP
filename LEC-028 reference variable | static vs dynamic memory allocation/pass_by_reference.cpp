#include<iostream>
using namespace std;

void update(int &j){
    j++;
}

int main(){
    int i = 0;
    cout << "Before update i : " << i << endl;
    update(i);
    cout << "After update i : " << i << endl;
}