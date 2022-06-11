#include<iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node(int v){
        val = v;
        next = NULL;
    }
};

Node* insert(int arr[]){
    // Node* temp = new Node(val);
    Node *head, *temp;
    for(int i = 0; i < 8; i++){
        if(i == 0){
            head = new Node(arr[i]);
            temp = head;
        }else{
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    return head;
}

// Node* mirror(Node *root){
//     if(root == NULL){
//         return;
//     }
//     Node *temp = new Node(root->val);
//     temp->left = mirror(root->right);
//     temp->right = mirror(root->left);

//     return temp;
// }

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int i = 2;
    int j = 6;

    Node* head = insert(arr);

    Node* temp = head;

    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    int k = 0;
    while(k < i - 1 && temp != NULL){
        temp = temp->next;
        k++;
    }

    // cout<<"val "<<temp->val<<endl;

    Node* pre = NULL;
    Node* left = temp;
    Node* curr = temp->next;
    Node* right = curr;
    left->next = NULL;
    Node* nex;
    int diff = j - i;

    while(curr != NULL && diff > 0){
        nex = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
        diff--; 
    }

    cout<<pre->val<<endl;
    left->next = pre;
    // pre->next = curr;
    right->next = curr;

    temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    // left->next = nex;



    return 0; 
}

/*
https://ideone.com/GfOyfu
https://ideone.com/etItb4
*/