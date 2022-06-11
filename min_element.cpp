#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {2,4,1,5,6,8,9};
    auto temp = min_element(arr.begin(), arr.end());
    cout<<*temp<<endl;
    return 0;
}