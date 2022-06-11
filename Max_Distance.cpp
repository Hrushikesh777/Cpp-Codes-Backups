#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    vector<int> arr{-1, -1, 2};
    set<pair<int, int>> s;
    set<int, greater<int>> index;
    int op = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        s.insert(make_pair(arr[i], i));
    }

    for(auto x : s){
        index.insert(x.second);
    }

    for(auto x : s){
        int ind = x.second;
        index.erase(ind);
        int temp = *index.begin() - ind;
        op = max(op, temp);
    }

    cout<<"op -> "<<op<<endl;

    // for(auto x : dist){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // cout<<"max is -> "<<*max_element(dist.begin(), dist.end());

    return 0;
}