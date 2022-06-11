#include<iostream>
#include<vector>
using namespace std;

void test(vector<int> &arr){
    arr[0] = 100;
}

int main(){
    // vector<pair<int, int>> arr;

    // for(int i = 0; i < 10; i++){
    //     arr.push_back(make_pair(i, i*10));
    // }

    // for(auto x : arr){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    vector<int> arr(10, -1);
    test(arr);
    cout<<arr[0]<<endl;

    string s = "1abcd";
    s += 'd';
    s[0] = '1';
    // s = s + "z" + "x";
    // s = string(s, 'z');
    cout<<s<<endl;
    // string temp = "" + s[0]; 
    // s = s + to_string(-1);
    // cout<<temp<<endl;
    // int val = stoi(temp);
    // cout<<"s is -> "<<s<<endl;
    // for(char x : s){
    //     cout<<x<<endl;
    // }

    // char op = max(s[0], 'b');
    // cout<<op<<endl;
    // if(s[0] > 'b'){
    //     cout<<"true";
    // }else{
    //     cout<<"false";
    // }
}