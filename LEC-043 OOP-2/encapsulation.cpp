// Encapsulation: set all pararmeters are private:
#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
        void setName(string name){
            this->name = name;
        }
        void setAge(int age){
            this->age = age;
        }
        void setHeight(int height){
            this->height = height;
        }

        string getName(){
            return this->name;
        }
        int getAge(){
            return this->age;
        }
        int getHeight(){
            return this->height;
        }
};

int main(){
    Student s1;
}