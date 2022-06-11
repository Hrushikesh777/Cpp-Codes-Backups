#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int, greater<int>> set1;
    set<int> s1;

    set<int> s2 = {10, 50, 30, 20, 40};
    
    cout<<*s2.begin()<<endl;

    for(int i=0; i<10; i++){
        set1.insert((i+1) * 10);
        s1.insert((i+1) * 10);
    }

    auto it = s1.lower_bound(40);
    cout<<"lower bound -> "<<*it<<endl;
    int diff = distance(it, s1.end());
    cout<<"eles greater th 45 -> "<<diff<<endl;

    for(auto x:set1){
        cout<<x<<" ";
    }
    cout<<"\n";

    set1.erase(10);
    cout<<"Size of set1 : "<<set1.size();

    return 0;
}