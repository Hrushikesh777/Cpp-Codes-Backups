#include<iostream>
#include<vector>
#include<utility>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, vector<pair<int, int>>> m;
    int arr[] = {1, 0, -1, 0, -2, 2};

    for(int i=0; i<5; i++){
        for(int j=i+1; j<6; j++){
            pair<int, int> temp;
            temp.first = arr[i];
            temp.second = arr[j];
            m[arr[i]+arr[j]].push_back(temp);
        }
    }

    for(auto itr:m){
        cout<<"key : "<<itr.first<<endl;
        cout<<"val : "<<endl;
        for(int i=0; i<itr.second.size(); i++){
            cout<<itr.second[i].first<<" -> "<<itr.second[i].second<<endl;
        }
    }

    return 0;
}