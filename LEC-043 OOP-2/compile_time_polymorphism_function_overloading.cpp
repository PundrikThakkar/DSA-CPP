#include<iostream>
using namespace std;

// both function should have different number of arguments or different type of arguments.It can't be differentiate just by return type

class A{
    public:
        void sayHello(){
            cout << "Hello sir!" << endl;
        }
        void sayHello(string name){
            cout << "Hello " + name << endl;
        }
};

int main(){
    A a;
    a.sayHello();
    a.sayHello("pundrik");
    return 0;
}