#include<iostream>
using namespace std;

int main(){
    int operand1, operand2;
    cout << "Enter the value of operand1:";
    cin >> operand1;
    cout << "Enter the value of operand2:";
    cin >> operand2;

    char operatorr;
    cout << "Enter your operator:";
    cin >> operatorr;

    switch (operatorr)
    {
        case '+':{
            cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << endl;
            break;
        }
        case '-':{
            cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << endl;
            break;
        }
        case '*':{
            cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << endl;
            break;
        }
        case '/':{
            cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << endl;
            break;
        }
        case '%':{
            cout << operand1 << " % " << operand2 << " = " << (operand1 % operand2) << endl;
            break;
        }
        default:{
            cout << "Error: Enter valid operatorr!!!";
        }
    }

    return 0;
}