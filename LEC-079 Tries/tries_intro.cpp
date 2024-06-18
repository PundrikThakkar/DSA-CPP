#include<iostream>
using namespace std;

class TriNode{
    public:
        char data;
        TriNode *children[26];
        bool isTerminal;

        TriNode(char ch){
            data = ch;
            for (int i = 0; i < 26;i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie{
    public:
        TriNode *root;

        // starting of Trie with root 
        Trie(){
            root = new TriNode('\0');
        }
        
        // inserting one by one tri node of word's character by character
        void insertUtil(TriNode* root,string word){
            // word is fully inserted
            if(word.length()==0){
                root->isTerminal = true;
                return;
            }
            // getting index , where that character should be present;
            int index = word[0] - 'a';
            // if that character triNode is not preset.then make another triNode to connect to root;
            TriNode *child;

            // triNode present
            if(root->children[index]!=NULL){
                child = root->children[index];
            }
            // triNode absent;
            else
            {
                child = new TriNode(word[0]);
                root->children[index] = child;
            }

            insertUtil(child, word.substr(1));
        }

        void insert(string word){
            insertUtil(word);
        }
        

        // searching character by character / triNode by triNode
        bool searchUtil(TriNode* root,string word){
            // when the words last character is found. then return is that last character was terminal or not
            if(word.length()==0){
                return root->isTerminal;
            }

            // to check that character's triNode is present;
            int index = word[0] - 'a';
            TriNode *child;

            //present
            if(root->children[index]!=NULL){
                child = root->children[index];
            }else{

                //absent
                return false;
            }
            return searchUtil(child, word.substr(1));
        }

        bool search(string word){
            return searchUtil(root, word);
        }
}

int main(){
    Trie *t = new Trie();
    t->insert("abcd");
    cout << t->search("abc") << endl;
    cout << t->search("abcd") << endl;
}