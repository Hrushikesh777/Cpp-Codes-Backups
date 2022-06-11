#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, int> arr;
    int temp[] = {9, 9, 9, 2, 5};
    int temp_size = sizeof(temp) / sizeof(temp[0]);

    for(int i=0; i<temp_size; i++){
        if(arr.count(temp[i]) == 1){
            arr[temp[i]]++;
        }else{
            arr[temp[i]] = 1;
        }
    }

    multimap<int, int, greater<int>> arr1;
    cout<<"arr is : "<<endl;
    for(auto itr = arr.begin(); itr != arr.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
        arr1.insert({itr->second, itr->first});
    }

    cout<<"arr1 is : "<<endl;
    for(auto itr = arr1.begin(); itr != arr1.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}