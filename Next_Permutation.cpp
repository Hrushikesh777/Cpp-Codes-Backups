#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    set<pair<int, int>> nums;
    vector<int> arr{5, 4, 3, 2, 1};
    vector<int> op;
    int limit = -1;

    nums.insert(make_pair(arr[arr.size() - 1], arr.size() - 1));

    for(int i = arr.size() - 2; i >= 0; i--){
        cout<<"i is -> "<<arr[i]<<endl;
        auto itr = nums.upper_bound(make_pair(arr[i], INT_MAX));
        if(itr != nums.end()){
            // cout<<nums.upper_bound(make_pair(arr[i], INT_MAX))->first<<" "<<nums.upper_bound(make_pair(arr[i], INT_MAX))->second<<endl;
            nums.insert(make_pair(arr[i], i));
            arr[i] = itr->first;
            limit = i;
            nums.erase(make_pair(itr->first, itr->second));
            break;
        }
        nums.insert(make_pair(arr[i], i));
    }

    for(int i = 0; i <= limit; i++){
        op.push_back(arr[i]);
    }

    for(auto x : nums){
        op.push_back(x.first);
    }

    for(auto x : op){
        cout<<x<<" ";
    }

    cout<<endl;

    return 0;
}