#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = this;
        }
};

void insertAfter(Node *&tail,int element,int d){
    if(tail==NULL){
        Node *temp = new Node(d);
        tail = temp;
        return;
    }else{
        while(tail->data != element){
            tail = tail->next;
        }
        Node *temp = new Node(d);
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
        return;
    }
}

void print(Node *&tail){
    if(tail==NULL){
        cout << "LL is empty" << endl;
        return;
    }
    Node *temp = tail;
    cout << tail->data << "->";
    tail = tail->next;
    while (tail != temp)
    {
        cout << tail->data << "->";
        tail = tail->next;
    }
    if(tail->next!=tail) cout << tail->data;
    cout << endl;
    return;
}

void deleteNode(Node *&tail,int d){
    if(tail->next==tail && d==tail->data){
        tail->next = NULL;
        tail = NULL;
        delete tail;
        cout << "LL is empty" << endl;
        return;
    }
    Node *prev = tail;
    Node *curr = tail->next;
    while(curr->data!=d){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    tail = prev;
    curr->next = NULL;
    curr = NULL;
    delete curr;
    cout << "Node is deleted SuccessFully!" << endl;
    return;
}

int main(){
    Node *tail = NULL;
    insertAfter(tail, 1, 2);
    print(tail);
    insertAfter(tail, 2, 4);
    print(tail);
    insertAfter(tail, 2, 5);
    print(tail);
    deleteNode(tail, 5);
    print(tail);
    deleteNode(tail, 4);
    print(tail);
}