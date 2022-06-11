#include<iostream>
#include<vector>
using namespace std;

int main(){

    int temp = 3;
    vector<int> arr;

    for(int i=0; i<14; i++){
        // cout<<"temp is : "<<temp<<endl;
        arr.push_back(temp & 1);
        temp = temp>>1;
    }

    for(auto itr = arr.rbegin(); itr != arr.rend(); itr++){
        cout<<*itr;
    }
    
    return 0;
}