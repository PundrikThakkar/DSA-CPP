#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int front;
        int rear;
        int size;

        Queue(int size){
            this->size = size;
            arr = new int[arr];
            this->front = -1;
            this->rear = -1;
        }

        void push(int d){
            if(front==-1){
                front++;
                rear++;
                arr[rear] = d;
                return;
            }
            else if(rear==n-1){
                cout << "OVERFLOW" << endl;
                return;
            }else{
                rear++;
                arr[rear] = d;
            }
        }

        void pop(){
            if(front==-1){
                cout << "UNDERFLOW" << endl;
                return;
            }else if(rear==front){
                front = -1;
                rear = -1;
                return;
            }else{
                front++;
                return;
            }
        }

        int front(){
            if(front==-1){
                cout << "QUEUE IS EMPTY" << endl;
                return -1;
            }
            else{
                int d = arr[front];
                return d;
            }
        }

        int rear(){
            if(front==-1){
                cout << "QUEUE IS EMPTY" << endl;
                return -1;
            }else{
                int d = arr[rear];
                return d;
            }
        }

        bool isEmpty(){
            if(front==-1){
                return true;
            }else{
                return false;
            }
        }
}

int main(){
    Queue q(5);
}