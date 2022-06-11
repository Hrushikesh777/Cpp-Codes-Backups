#include<bits/stdc++.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *first = NULL, *second = NULL, *last = NULL, *pre = NULL;

void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);

    if(pre != NULL && (root->val < pre->val)){
        if(first == NULL){
            first = pre;
            second = root;
        }else{
            last = root;
        }
    }

    pre = root;
    inorder(root->right);
}

vector<int> recoverTree(TreeNode* A) {
    vector<int> op;
    first = NULL;
    second = NULL;
    last = NULL;
    pre = NULL;

    inorder(A);

    if(!first && !last){
        op.push_back(first->val);
        op.push_back(last->val);
    }else if(!first && !second){
        op.push_back(first->val);
        op.push_back(second->val);
    }

    return op;
}