#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* parent;
    int rank;
};

unordered_map<int, Node*> map;
int max_ = -99999;

void makeset(int data){
    Node* node = new Node();
    node->data = data;
    node->parent = node;
    node->rank = 0;
    map[data] = node;
}

bool Union(int data1, int data2){
    Node* node1 = map[data1];
    Node* node2 = map[data2];

    Node* parent1 = findset(node1);
    Node* parent2 = findset(node2);

    if(parent1 == parent2){
        return false;
    }

    if(parent1->rank >= parent2->rank){
        parent1->rank = parent1->rank + parent2->rank;
        parent2->parent = parent1;
        max_ = max(max_, parent1->rank);
    }else{
        parent2->rank = parent1->rank + parent2->rank;
        parent1->parent = parent2;
        max_ = max(max_, parent2->rank);
    }
    return true;
}

Node* findset(Node *node){
    Node* parent = node->parent;
    if(parent == node){
        return parent;
    }
    node->parent = findset(node->parent);
    return node->parent;
}

int main(){
    makeset(1);
    makeset(2);
    makeset(3);
    makeset(4);
    makeset(5);
    makeset(6);
    makeset(7);

    return 0;
}