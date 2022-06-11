#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    int arr[] = { 12,1,2,3,0,11,4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    multiset<int> temp;
    int *op = new int[len];

    for(int i=len-1; i>=0; i--){
        temp.insert(arr[i]);
        auto it = temp.lower_bound(arr[i]);
        op[i] = distance(temp.begin(), it);
    }

    for(int i=0; i<len; i++){
        cout<<op[i]<<" ";
    }
    return 0;
}