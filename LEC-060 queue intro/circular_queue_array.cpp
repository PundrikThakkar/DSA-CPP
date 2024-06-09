#include<iostream>
using namespace std;

class CircularQueue{
    public:
        int *arr;
        int front;
        int rear;
        int size;

        CircularQueue(int size){
            this->size = size;
            arr = new int[size];
            this->front = -1;
            this->rear = -1;
        }

        void push(int d){
            if(front==-1){
                front++;
                rear++;
                arr[rear] = d;
                return;
            }else if((front==0 && rear==size-1) || (rear=(front-1)%(size-1))){
                cout << "OVERFLOW" << endl;
                return;
            }else if(rear==n-1){
                rear = 0;
                arr[rear] = d;
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
            }else if(front==rear){
                front = -1;
                rear = -1;
                return;
            }else if(front==size-1){
                front = 0;
                return;
            }else{
                front++;
                return;
            }
        }
}

// OTHER METHODS ARE SAME AS QUEUE