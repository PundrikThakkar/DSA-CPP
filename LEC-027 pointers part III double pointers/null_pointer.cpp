#include<iostream>
using namespace std;

int main(){
    /* This is wrong
    int *p = 0;
    int first = 3;
    *p = first;
    */

   // Declaration
    int *p = 0;
    int first = 3;
    p = &first;
    cout << *p << endl;

    return 0;
}