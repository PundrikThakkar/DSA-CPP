#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data){
            this->data = data;
            this->right = NULL;
            this->left = NULL;
        }
}

Node* buildTree(Node *root){
    cout << "Enter the data:";
    int d;
    cin >> d;
    root = new Node(d);
    if(d==-1){
        return NULL;
    }
    cout << "Enter the data for inserting in left of " << d << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in left of " << d << endl;
    root->right = buildTree(root->right);
    return root;
}

void leveOrderTraversal(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = root;
        if(temp==NULL){
            cout << endl;
            if(!e.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node *root){
    if(root==NULL){
        return;
    }
    Postorder(root->leftt);
    PostOrder(root->right);
    cout << root->left;
}

void buildFromLevelOrder(Node* &root){
    queue<Node *> q;
    cout << "Enter the data for root:" << endl;
    int data;
    cin>>data;
    root = new Node(data);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout << "Enter left node for: " << temp->data << endl;
        int leftdata;
        if(leftdata!=-1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter right node for:" << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1){
            temp->right = new Node(rightdata);
        }
    }
}