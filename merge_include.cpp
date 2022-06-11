#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // vector<int> v1 {1,7,5,9,3};
    // vector<int> v2 {2,4,6,8,10};
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end());
    // vector<int> v3 (v1.size() + v2.size());

    // //merge operation
    // merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    // cout<<"merge of two sets : "<<endl;
    // for(int &x : v3){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    vector<int> v1 = {1, 3, 4, 5, 20, 30};
    vector<int> v2 = {1, 5, 6, 7, 25, 30};
    vector<int> v3(v1.size() + v2.size());
    vector<int> v4(v1.size() + v2.size());
    //union of two sets
    auto it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    auto it1 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());

    v3.resize(it - v3.begin());
    v4.resize(it1 - v4.begin());

    cout<<"union of two sets : "<<endl;
    for(int &x : v3){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"intersection of two sets : "<<endl;
    for(int &x : v4){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
