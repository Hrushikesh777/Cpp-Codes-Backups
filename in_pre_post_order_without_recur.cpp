#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* newNode(int data){
    Node *node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void inorder(Node *root, vector<int> &ino){
    stack<Node *> s;
    Node *curr = root;

    /* Constructed binary tree is 
            10 
          /   \ 
        8      15 
      /  \    /  \
    3     9  12   20 */

    while(curr != NULL || !s.empty()){

        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        // cout<<curr->data<<" ";
        ino.push_back(curr->data);
        
        curr = curr->right;
        
    }

}

void preorder(Node *root, vector<int> &preo){
    // cout<<"test"<<endl;
    stack<Node *> s;
    Node *curr = root;
    s.push(curr);

    while(!s.empty()){
        curr = s.top();
        s.pop();

        // cout<<curr->data<<" ";
        // cout<<"yest"<<endl;
        preo.push_back(curr->data);

        if(curr->right){
            s.push(curr->right);
        }

        if(curr->left){
            s.push(curr->left);
        }
    }
}

void postorder(Node *root, vector<int> &posto){
    stack<Node *> s;
    Node *curr = root;
    s.push(curr);

    while(!s.empty()){
        curr = s.top();
        s.pop();

        // cout<<curr->data<<" ";
        // cout<<"yest"<<endl;
        posto.push_back(curr->data);

        if(curr->left){
            s.push(curr->left);
        }

        if(curr->right){
            s.push(curr->right);
        }
    }
    reverse(posto.begin(), posto.end());
}

int main(){
    /* Constructed binary tree is 
            10 
          /   \ 
        8      15 
      /  \    /  \
    3     9  12   20 */

    vector<int> ino, preo, posto;
    Node *root = NULL;

    root = newNode(10);
    root->left = newNode(8);
    root->left->left = newNode(3);
    root->left->right = newNode(9);
    root->right = newNode(15);
    root->right->left = newNode(12);
    root->right->right = newNode(20); 

    inorder(root, ino);
    // cout<<endl;
    for(int i = 0; i < ino.size(); i++){
        cout<<ino[i]<<" "; 
    }
    cout<<endl;

    preorder(root, preo);
    cout<<endl;
    for(int i = 0; i < preo.size(); i++){
        cout<<preo[i]<<" "; 
    }
    cout<<endl;

    postorder(root, posto);
    cout<<endl;
    for(int i = 0; i < posto.size(); i++){
        cout<<posto[i]<<" "; 
    }
    cout<<endl;
    
    return 0;
}