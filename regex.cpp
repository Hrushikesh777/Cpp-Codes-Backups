#include<iostream>
#include<regex>
#include<vector>
using namespace std;

int main(){
    vector<string> arr = {"2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"};
    string s = "+12.12";
    regex r("[+-]?([0-9]+\\.[0-9]+|[\\.[0-9]+|[0-9]+\\.)");

    cout<<regex_match(s, r)<<endl;

    // for(string x : arr){
    //     cout<<"x is -> "<<x<<" "<<regex_match(x, r)<<endl;
    // }

    return 0;
}