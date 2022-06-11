#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int, int, greater<int>> arr;
    int temp[] = { 7, 10, 4, 3, 20, 15 };
    int n = 6;
    int k = 3;

    for(int i=0; i<n; i++){
       arr.insert({temp[i], i});
    }

    // for(auto i = arr.begin(); i != arr.end(); i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }

    for(auto i = arr.end(); i != arr.begin(); i--){
        cout << i->first << " " << i->second << endl;
        if(k == 0){
            cout<<"op is : "<<i->first<<endl;
        }
        k--;
    }


    return 0;
}