#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    string s = "rushi";
    hash<string> hf;

    unordered_set<size_t> set;

    // cout<<hf(s)<<endl;

    for(int i = 0; i < 100000000; i++){
        if(i % 100000 == 0){
            cout<<"i -> "<<i<<endl;
        }
        size_t temp = hf(to_string(i));
        if(set.find(temp) != set.end()){
            cout<<"collision"<<endl;
            cout<<"i -> "<<i<<endl;
            break;
        }
    }

    return 0;
}