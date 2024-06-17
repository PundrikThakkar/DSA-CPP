#include<iostream>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;

        TreeNode(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
TreeNode* buildTree(TreeNode* &root,int data){
    if(root==NULL){
        TreeNode *temp = new TreeNode(data);
        root = temp;
        return root;
    }
    if(data>root->data){
        root->right = buildTree(root->right, data);
    }else{
        root->left = buildTree(root->left, data);
    }

    return root;
}

void takeInput(TreeNode* &root){
    int data;
    cin >> data;
    while(data!=-1){
        buildTree(root,data);
        cin >> data;
    }
}


void inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

bool isPresent(TreeNode *root,int key){
    while(root!=NULL){
        if(root->data==key){
            return true;
        }else if(key>root->data){
            root = root->right;
        }else{
            root = root->left;
        }
    }
    return false;
}

int getMini(TreeNode * root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root->data;
}

int getMaxi(TreeNode* root){
    while(root->right!=NULL){
        root = root->right;
    }

    return root->data;
}

TreeNode* deleteFromBST(TreeNode* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        // No child
        if(root->left == NULL && root->right==NULL){
            delete root;
            return NULL;
        }else if(root->left!=NULL && root->right==NULL){
            TreeNode *temp = root->left;
            delete root;
            return temp;
        }
        else if(root->right!=NULL && root->left==NULL){
            TreeNode *temp = root->right;
            delete root;
            return temp;
        }
        else{
            int maxi = getMaxi(root->left);
            root->data = maxi;
            root->left = deleteFromBST(root->left, maxi);
            return root;
        }
    }
    else if(root->data> val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main(){
    cout << "Enter the data to form binary search tree: " << endl;
    TreeNode *root = NULL;
    takeInput(root);
    inorder(root);
    cout << endl;
    cout << (isPresent(root, 4) ? "true" : "false") << endl;
    cout << getMini(root) << endl;
    cout << getMaxi(root) << endl;
}