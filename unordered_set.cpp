#include<iostream>
#include<unordered_set>
//repeated elements are not allowed
using namespace std;

int main(){

    unordered_set<int> s;

    for(int i=0; i<7; i++){
        s.insert(i*10);
    }

    s.erase(152466);
    
    int temp = *s.begin();
    cout<<"temp is -> "<<*s.begin()<<endl;

    //to delete item
    // s.erase(40);

    // for(auto itr = s.begin(); itr != s.end(); ++itr){
    //     cout<<*itr<<endl;
    // }

    //find element in unordered set
    if(s.find(80) == s.end()){
        cout<<"80 is not present"<<endl;
    }

    if(s.find(50) != s.end()){
        cout<<"50 is present"<<endl;
    }

    auto itr = s.begin();
    cout<<"first is : "<<*itr<<endl;
    return 0;
}