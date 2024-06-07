#include<iostream>
using namespace std;

class Employee{
    public:
        string first;
        string last;
        int salary;
        string fullNameStr;

        Employee(string first, string last, int salary){
            this->first = first;
            this->last = last;
            this->salary = salary;
        }

        string fullName(){
            fullNameStr = first + ' ' + last;
            return fullNameStr;
        }
};

class Developer : public Employee{
    public:
        string prog_lang;

        // Constructor for Developer class
        Developer(string first, string last, int salary, string prog_lang) : Employee(first, last, salary) {
            this->prog_lang = prog_lang;
        }
};

int main() {
    // Creating a Developer object
    Developer dev("John", "Doe", 50000, "C++");

    // Printing the full name and programming language
    cout << "Full Name: " << dev.fullName() << endl;
    cout << "Programming Language: " << dev.prog_lang << endl;

    return 0;
}
