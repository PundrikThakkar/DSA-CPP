#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void InsertAtHead(Node* &head,Node *&tail, int d){
    // Linked list is NULL
    if(head==NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = head;
        return;
    }
    // already present atleast 1 Node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    return;
}

void InsertAtTail(Node *&head,Node *&tail, int d){
    // Linked list is empty
    if(head==NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    // atleast 1 element is present
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
    return;
}

void InsertAtPosition(Node *&head,Node *&tail,int position,int d){
    // want to present position=1
    if(position==1){
        InsertAtHead(head, tail, d);
        return;
    }
    // traverse till the position
    int cnt = 1;
    Node *prev = NULL;
    Node *curr = head;
    while(cnt!=position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    // when position is tail
    if(curr==NULL){
        InsertAtTail(head, tail, d);
        return;
    }
    // position is somewhere between head and tail
    Node *temp = new Node(d);
    prev->next = temp;
    temp->next = curr;
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

void deleteNode(Node *&head,Node *&tail,int position){
    // Linked list is empty or not
    if(head==NULL){
        cout << "Linked list is already empty" << endl;
        return;
    }
    // delete head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    // travser to the position
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while(cnt!=position){
        cnt++;
        prev = curr;
        curr = curr->next;
    }
    //check is it tail
    if(curr->next==NULL){
        tail = prev;
        prev->next = NULL;
        delete curr;
    }
    // the node is between head and tail
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    return;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cout << "Enter the number of nodes you want to enter:->";
    cin >> n;
    for (int i = 0; i < n;i++){
        int option;
        cout << "Enter where you want to insert your new node:" << endl;
        cout << "Enter 1 to Enter at head" << endl;
        cout << "Enter 2 to Enter at tail" << endl;
        cout << "Enter 3 to Enter at some position" << endl;
        cin >> option;
        int data;
        cout << "Enter the data:";
        cin >> data;
        cout << endl;
        if(option==1){
            InsertAtHead(head, tail, data);
        }else if(option==2){
            InsertAtTail(head, tail, data);
        }else if(option==3){
            cout << "Enter the position:";
            int position;
            cin >> position;
            InsertAtPosition(head, tail, position, data);
        }else{
            cout << "Sorry wrong position!!" << endl;
            return 0;
        }
        print(head);
        cout << endl;
    }

    int y;
    cout << "Do you want to delete any node?" << endl;
    cout << "Enter 1 for yes and 0 for no:";
    cin >> y;
    if(y){
        cout << "Enter the position of node which you want to delete:";
        int p;
        cin >> p;
        deleteNode(head, tail, p);
        print(head);
    }
    return 0;
}