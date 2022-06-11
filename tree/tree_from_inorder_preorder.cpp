#include <bits/stdc++.h>
using namespace std;

// static int index = 0;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

Node *getnode(int x)
{
    Node *node = new Node();
    node->val = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *build(Node *root, vector<int> pre, vector<int> ino, int i, int j, int &k)
{
    // if(root == NULL){
    //     return;
    // }

    if (i == j)
    {
        Node *temp = getnode(pre[k]);
        k++;
        return temp;
    }

    if (j < i)
    {
        return NULL;
    }

    root = getnode(pre[k]);

    int pos = -1;
    for (int x = i; x <= j; x++)
    {
        if (ino[x] == pre[k])
        {
            pos = x;
            break;
        }
    }

    k++;

    root->left = build(root->left, pre, ino, i, pos - 1, k);
    root->right = build(root->right, pre, ino, pos + 1, j, k);

    // cout<<root->val<<" "<<root->left<<" "<<root->right<<endl;

    return root;
}

Node *build_tree(Node *root, vector<int> inorder, vector<int> preorder, int start, int end, int &index, unordered_map<int, int> m)
{
    if (start == end)
    {
        Node *temp = getnode(preorder[index]);
        index++;
        return temp;
    }

    if (start > end)
    {
        return NULL;
    }

    root = getnode(preorder[index]);
    int mid = m[preorder[index]];
    // for(int i = start; i <= end; i++){
    //     if(inorder[i] == preorder[index]){
    //         mid = i;
    //         break;
    //     }
    // }
    index++;
    root->left = build_tree(root->left, inorder, preorder, start, mid - 1, index, m);
    root->right = build_tree(root->right, inorder, preorder, mid + 1, end, index, m);
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    vector<int> in = {9, 3, 15, 20, 7};
    vector<int> pre = {3, 9, 20, 15, 7};
    unordered_map<int, int> m;

    Node *root = NULL;

    int index = 0;

    for (int i = 0; i < in.size(); i++)
    {
        m[in[i]] = i;
    }

    // root = build_tree(root, in, pre, 0, in.size() - 1, index, m);
    root = build(root, pre, in, 0, in.size() - 1, index);

    cout << "done" << endl;

    inorder(root);
    cout << endl;

    preorder(root);
    cout << endl;

    return 0;
}