#include<iostream>
#include<set>
using namespace std;

set<int> arr;
long long temp;

void jumping_no(long long x, int n){
    if(x > n){
        return;
    }
    arr.insert(x);

    long long mod = x % 10;
    if(mod == 0){
        temp = x * 10 + (mod + 1);
        jumping_no(temp, n);
    }else if(mod == 9){
        temp = x * 10 + (mod - 1);
        jumping_no(temp, n);
    }else{
        temp = x*10 + (mod + 1);
        jumping_no(temp, n);
        temp = x * 10 + (mod - 1);
        jumping_no(temp, n);
    }
}

int main(){

    int n = 500;

    // for(int i=0; i <= 9; i++){
    //     cout<<i<<" ";
    // }

    for(int i=1; i<=9; i++){
        jumping_no(i, n);
    }

    for(auto i = arr.begin(); i != arr.end(); ++i){
        cout<<*i<<" ";
    }

    return 0;
}