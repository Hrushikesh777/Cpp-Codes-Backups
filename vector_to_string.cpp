#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int> vec;
    string op = "";
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(9);
    vec.push_back(7);

    for(auto x : vec){
        op += to_string(x);
    }

    cout<<op<<endl;


    return 0;
}