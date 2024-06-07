#include<iostream>
using namespace std;

// rules: parents and child class must have same name of methods,same parameters,possible only through inheritance

class Animal{
    public:
        void speak(){
            cout << "Speaks()!" << endl;
        }
};

class Dog:public Animal{
    public:
        void speak(){
            cout << "Barking!" << endl;
        }
};

int main(){
    Dog d1;
    d1.speak();
    return 0;
}