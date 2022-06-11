#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    list<pair<int, int>> temp;

    // temp.begin()->first

    for(int i = 0; i < 5; i++){
        l.push_back(rand() % 100);
    }

    // for(auto x : l){
    //     cout<<x<<" ";
    // }
    auto itr = l.begin();

    itr++;

    for(int i = 0; i < 5; i++){
        itr = l.insert(itr, (i+1) * 11);
    }

    auto itr2 = l.begin();

    // itr2++;

    // l.insert(itr2, 20);
    itr = l.begin();
    while(itr != l.end()){
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;

    list<int> l1 = {1, 5, 8};

    itr = l1.begin();

    itr2 = l1.erase(itr);

    cout<<*itr2<<endl;

    itr = l1.begin();

    cout<<*itr<<endl;

    return 0;
}