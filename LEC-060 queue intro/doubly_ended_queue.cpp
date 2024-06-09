#include<iostream>
using namespace std;

class DoublyQueue{
    public:
        int *arr;
        int front;
        int rear;
        int size;

        DoublyQueue(int size){
            this->size = size;
            arr = new int[size];
            this->front = -1;
            this->rear = -1;
        }

        void push_front(int d){
            if(front==-1){
                front++;
                rear++;
                arr[front] = d;
                return;
            }else if((front==0 && rear==size-1) || (rear=(front-1)&(size-1))){
                cout << "OVERFLOW" << endl;
                return;
            }else if(front==0){
                front = size - 1;
                arr[front] = d;
                return;
            }else{
                front--;
                arr[front] = d;
                return;
            }
        }

        void pop_back(){
            if(front==-1){
                cout << "UNDERFLOW" << endl;
                return;
            }
            else if(front==rear){
                front = -1;
                rear = -1;
                return;
            }else if(rear==0){
                rear = size - 1;
                return;
            }else{
                rear--;
                return;
            }
        }
}

// OTHER FUNCTIONS ARE SAME AS CIRCULAR QUEUE: PUSH_BACK AND POP_FRONT , etc are same as queue