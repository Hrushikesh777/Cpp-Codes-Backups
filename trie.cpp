#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

struct TrieNode{
    unordered_map<char, TrieNode*> child;
    bool isend;
};

TrieNode* getnode(){
    TrieNode* node = new TrieNode;
    node->isend = false;
    return node;
}

void insert(TrieNode*& root, const string& word){

    if(root == NULL){
        root = getnode();
    }

    TrieNode* temp = root;

    for(int i=0; i<word.length(); i++){
        if(temp->child.find(word[i]) == temp->child.end()){
            temp->child[word[i]] = getnode();
        }
        temp = temp->child[word[i]];
    }

    temp->isend = true;
}

bool search(TrieNode* root, const string& word){
    if(root == NULL){
        return false;
    }

    TrieNode* temp = root;
    for(int i=0; i<word.length(); i++){
        temp = temp->child[word[i]];
        if(temp == NULL){
            return false;
        }
    }

    return temp->isend;
}

int main(){

    TrieNode* root = NULL;

    insert(root, "hrushi");
    cout<<search(root, "hrushi")<<endl;
    
    return 0;
}