#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node *left, *right;
    node(int x) : val(x), left(NULL), right(NULL) {}
};

node* build_bst(node *root, int val){
    if(!root){
        root = new node(val);
        return root;
    }

    if(val < root->val){
        root->left = build_bst(root->left, val);
    }else{
        root->right = build_bst(root->right, val);
    }

    return root;
}

node* build_bst_2(vector<int>preorder, int &pos, int min, int max){
    if (pos >= preorder.size()) return NULL;
    int val = preorder[pos];
    if (val > max || val <min) return NULL;
    
    node* temp = new node(val);
    pos++;
    temp->left = build_bst_2(preorder, pos, min, val);
    temp->right = build_bst_2(preorder, pos, val, max);
    
    return temp;
    }

void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preorder(node *root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> arr = {8, 5, 1, 7, 10, 12};
    node *root = NULL;

    // for(int x : arr){
    //     root = build_bst(root, x);
    // }

    int pos;
    root = build_bst_2(arr, pos, INT_MIN, INT_MAX);


    cout<<"inorder:"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"preorder:"<<endl;
    preorder(root);
    cout<<endl;

    return 0;
}