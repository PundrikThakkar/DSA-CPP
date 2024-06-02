#include<iostream>
using namespace std;

void update(int **p){
    // p = p + 1;
    // No change in any value

    // *p = *p + 1;
    // change in p1 value

    **p = **p + 1;
    // change in i value
}

int main(){
    int i = 0;
    int *p1 = &i;
    int **p2 = &p1;

    cout << "----- BEFORE ----" << endl;
    cout << "Value of i : " << i << endl;
    cout << "Value of p1 : " << p1 << endl;
    cout << "Value of p2 : " << p2 << endl;

    cout << endl;
    update(p2);
    
    cout << "---- AFTER ----" << endl;
    cout << "Value of i : " << i << endl;
    cout << "Value of p1 : " << p1 << endl;
    cout << "Value of p2 : " << p2 << endl;

    return 0;
}