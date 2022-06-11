#include<iostream>
#include<vector>
using namespace std;

//see GFG for diff variation in problems of LINKED LIST

class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node *head, *pre;
    vector<pair<int, Node*>> arr;

    /*Insert Data into Linked List*/
    for(int i=0;i<5;i++){
        if(i == 0){
            Node* temp = new Node();
            temp->data = i;
            temp->next = NULL;
            head = temp;
            pre = temp;
        }else{
            Node* temp = new Node();
            temp->data = i;
            pre->next = temp;
            temp->next = NULL;
            pre = pre->next;
        }
    }

    Node *test = head;
    int cnt = 1;

    while(test != NULL){
        arr.push_back(make_pair(cnt, test));
        test = test->next;
        cnt += 1;
    }

    for(auto x : arr){
        cout<<x.first<<" "<<x.second->data<<endl;
    }

    arr[0].second->next = arr[1].second->next;



    /*Retrive data from Linked List*/
    Node* temp = head;

    while(temp != NULL){
        cout<<"data is "<<temp->data<<endl;
        temp = temp->next;
    }

    /*Delete Node from Linked List*/
    int del = 3; //data to delete

    temp = head;
    pre = head;

    int i = 0;
    while(temp != NULL){
        if(temp->data == del){
            pre->next = temp->next;
        }
        if(i == 0){
            if (temp->data == del){
                head = head->next;
                break;
            }else{
                temp = temp->next;
                i++;
            }
        }else{
            temp = temp->next;
            pre = pre->next;
        }
    }

    cout<<"After Deletion"<<endl;
    temp = head;

    while (temp != NULL)
    {
        cout << "data is " << temp->data << endl;
        temp = temp->next;
    }

    

    return 0;
}