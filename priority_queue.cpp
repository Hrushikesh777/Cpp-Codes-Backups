#include<iostream>
// #include<stdlib.h>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<int>> q2; //reverse priority queue
    vector<int> v;

    for(int i=0; i<10; i++){
        v.push_back(rand() % 100);
    }

    for(int i=0; i<10; i++){
        q1.push(v[i]);
        q2.push(v[i]);
    }

    cout<<"queue 1"<<endl;
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }

    cout<<endl;

    cout << "queue 2" << endl;
    while (!q2.empty())
    {
        cout << q2.top() << " ";
        q2.pop();
    }

    return 0;
}