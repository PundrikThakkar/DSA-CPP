#include<iostream>
using namespace std;
// Two different class has functions with same function name , return type and arguments . Then that is called as ambiguity

class A{

    public:
        void func(){
            cout << "I am A" << endl;
        }
};

class B{
    public:
        void func(){
            cout << "I am B" << endl;
        }
};

int main(){

}