#include<iostream>
using namespace std;

// The difference between char array and string is : in normal usage string does not allow us 
//to access null terminator

int main(){
    char name[10];
    char duplicate_name[10];
    cout << "Enter your name :-> ";
    cin >> name;
    cout << endl;

    cout << name;
    cout << "length of char array :-> " << strlen(name) << endl;

    // coping name from name to duplicate_name;

    strcpy(duplicate_name, name);
    cout << "Duplicate string is :-> " << duplicate_name << endl;

    cout << "length of duplicate string :-> " << strlen(duplicate_name) << endl;

    cout << "Both strings are equal :-> " << strcmp(duplicate_name, name) << endl;
}