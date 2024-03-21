#include<iostream>
using namespace std;

int main(){

    cout << "Namaste duniya" << endl;

    int a = 6;
    cout <<"value of a : "<< a <<" size of int : "<< sizeof(a) << endl;

    char ch = 'a';
    cout <<"value of ch : "<<ch<< "\nsize of char : "<< sizeof(ch) << endl;

    bool result = true;
    cout << "value of result : "<< result << " \nsize of bool : "<< sizeof(result)<< endl;

    float f = 2.3;
    cout << "value of f : " << f << "\nsize of float : " << sizeof(f) << endl;

    double d = 2.5234;
    cout << "value of d : " << d << "\nsize of double : " << sizeof(d) << endl;

    long ll = 23513513;
    cout << "value of ll : " << ll << "\nsize of long : " << sizeof(ll) << endl;

    // type casting:

    //implicit type casting:when type of one variable change automatically. In most of the cases it happens when variable store data of less size of it's own.

    //explicit type casting:Where we have to convert data type of variable from one to another . In most of the cases it happens when variable want to store data of more size then it's own.
    
    int t = ch;
    cout << "after implicit type casting value of ch : " << t << endl;

    // Operators:

    // 1. Arithmetic:+,-,/,*,%
    // 2. logical:||, && , !
    // 3. bitwise: << , >>
    // 4. Assignment: +=, -=, /=, *=, %=
    // 5. Relational: <,>,<=,>=,==,!=
    // 6. Ternary: condition?true:false;
}