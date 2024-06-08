#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtPosition(Node *&head, Node *&tail, int position, int d) {
    if(head==NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }else{
        if(position==1){
            Node *temp = new Node(d);
            temp->next = head;
            head->prev = temp;
            head = temp;
            return;
        }
        else{
            Node *temp1 = head;
            int i = 1;
            while(i!=position){
                temp1 = temp1->next;
                i++;
            }
            if(temp1==NULL){
                Node *temp = new Node(d);
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
                return;
            }
            else{
                Node *temp = new Node(d);
                temp->prev = temp1->prev;
                temp1->prev->next = temp;
                temp->next = temp1;
                temp1->prev = temp;
                return;
            }
        }
    }
}

void deleteNode(Node *&head,Node *&tail,int position){
    if(head==NULL){
        cout << "UNDERFLOW" << endl;
        return;
    }else if(head->next==NULL && position==1){
        Node *temp = head;
        temp = NULL;
        delete temp;
        cout << "Linked List is empty!" << endl;
        return;
    }
    else if(position==1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        cout << "Node is deleted successfully and head is updated!" << endl;
        return;
    }
    int i = 1;
    Node *temp = head;
    while(i!=position){
        temp = temp->next;
        i++;
    }
    if(temp->next == NULL){
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        cout << "Node is deleted Successfully! and tail is updated" << endl;
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
    cout << "Node is deleted successfully!" << endl;
    return;
}

void print(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
    return;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    insertAtPosition(head, tail, 1, 1);
    insertAtPosition(head, tail, 2, 2);
    insertAtPosition(head, tail, 2, 3);
    insertAtPosition(head, tail, 2, 5);
    print(head);
    deleteNode(head, tail, 2);
    print(head);
    deleteNode(head, tail, 1);
    print(head);
    deleteNode(head, tail, 2);
    print(head);
}