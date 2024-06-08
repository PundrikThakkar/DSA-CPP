#include<iostream>
using namespace std;

class stack{
    public:
        int *arr;
        int top;
        int size;

        stack(int size){
            arr = new int[size];
            this->top = -1;
            this->size = size;
        }

        void push(int data){
            if(size-top > 0){
                top++;
                arr[top] = data;
                return;
            }else{
                cout << "OVERFLOW!" << endl;
                return;
            }
        }

        void pop(){
            if(top==-1){
                cout << "UNDERFLOW" << endl;
                return;
            }
            top--;
            return;
        }

        int peek(){
            if(top==-1){
                cout << "UNDERFLOW" << endl;
                return -1;
            }else{
                int d = arr[top];
                return d;
            }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }
};

int main()
{
    stack s(5);
    s.push(4);
    cout << s.peek() << endl;
    s.push(3);
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    cout << s.peek() << endl;
}
