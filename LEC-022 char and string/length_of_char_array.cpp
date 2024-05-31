#include<iostream>
using namespace std;

// The difference between char array and string is : in normal usage string does not allow us 
//to access null terminator
int main(){
    char name[10] = "pundrik";
    int length = 0;
    for (int i = 0; name[i] != '\0';i++){
        length++;
    }
    cout << "Length of character array or string is :-> " << length << endl;
}