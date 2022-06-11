#include<bits/stdc++.h>
using namespace std;

struct TrieNode{
    unordered_map<int, TrieNode*> child;
};

TrieNode* getnode(){
    TrieNode* node = new TrieNode;
    node->child.clear();
    return node;
}

void insert(TrieNode* &head, int num){
    bitset<32> bset(num);
    cout<<bset<<endl;

    if(head == NULL){
        head = getnode();
        cout<<"head -> "<<head->child.size()<<endl;
    }

    TrieNode* temp = head;

    for(int i = 31; i >= 0; i--){
        // cout<<"bit is -> "<<bset[i]<<" "<<temp->child.size()<<endl;
        for(auto x : temp->child){
            // cout<<"x is -> "<<x.first<<" "<<x.second<<endl;
        }
        if(temp->child.find(bset[i]) == temp->child.end()){
            // cout<<"if"<<endl;
            temp->child[bset[i]] = getnode();
        }
        temp = temp->child[bset[i]];
    }
}

bool search(TrieNode* head, int num){
    bitset<32> bset(num);

    TrieNode* temp = head;

    for(int i = 31; i >= 0; i--){
        if(temp->child.find(bset[i]) == temp->child.end()){
            return false;
        }
        temp = temp->child[bset[i]];
    }
    return true;
}

int max_xor(TrieNode* head, int num){
    bitset<32> bset(num), op;

    TrieNode* temp = head;

    for(int i = 31; i >= 0; i--){
        // cout<<op<<endl;
        if(bset[i] == 0 && temp->child.find(1) != temp->child.end()){
            op[i] = 1;
            temp = temp->child[1];
        }else if(bset[i] == 1 && temp->child.find(0) != temp->child.end()){
            op[i] = 1;
            temp = temp->child[0];
        }else{
            op[i] = 0;
            temp = temp->child[bset[i]];
        }
    }

    return op.to_ulong();    
}

int main(){
    vector<int> A = {10, 1, 2, 3};
    vector<int> B = {4, 1, 2};
    int op = 0;

    TrieNode* head = NULL;

    for(int x : A){
        insert(head, x);
    }
    cout<<"done"<<endl;

    // cout<<search(head, 5);

    // int temp = max_xor(head, 4);
    // cout<<"temp is -> "<<temp<<endl;

    for(int i = 0; i < B.size(); i++){
        cout<<"i is -> "<<B[i]<<endl;
        int temp = max_xor(head, B[i]);
        cout<<"temp -> "<<temp<<endl;
        // op = max(op, temp);
        if(temp > op){
            op = temp;
        }
    }

    // for(int x : B){
        // cout<<"x is -> "<<x<<endl;
        // int temp = max_xor(head, 4);
        // op = max(op, temp);
    // }

    cout<<"op is -> "<<op<<endl;
    return 0;
}