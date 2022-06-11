#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    
    map<int, int> arr;

    int temp[] = {4,3,5,1,2,7,6,8};

    //insert elements in map
    for(int i=1; i<=7; i++){
        arr[temp[i]] = i*10;
    }
    //first elment
    arr.erase(arr.begin());
    cout<<arr.begin()->first<<endl;
    
    //arr.insert({7, 80}); this does not replace value of key == 7
    //arr[7] = 80; this will replace value of key == 7

    // //retrive elements from map
    // for(auto itr = arr.begin(); itr != arr.end(); ++itr){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    // for(auto x : arr){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // // To check whether key is present or not
    // cout<<"Check whether key 5 present or not : "<<arr.count(5)<<endl;

    // cout << "Check whether key 8 present or not : " << arr.count(15) << endl;

    // //To delete element from map
    // arr[8] = 80;
    // cout<<"before delete element 8 :"<<endl;
    // for (auto itr = arr.begin(); itr != arr.end(); ++itr)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }
    // cout<<"after deleting element 8:"<<endl;
    // arr.erase(8);
    // for (auto itr = arr.begin(); itr != arr.end(); ++itr)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }
    return 0;
}