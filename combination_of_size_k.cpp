#include<iostream>
#include<vector>
using namespace std;

void comb(vector<int> ele, int k, int i, int n, int arr[]){
    if(i > n){
        return;
    }

    if(ele.size() == k){
        for(int i = 0; i < ele.size(); i++){
            cout<<ele[i]<<" ";
        }
        cout<<endl;
        return;
    }else{
        comb(ele, k, i+1, n, arr);
        ele.push_back(arr[i]);
        comb(ele, k, i+1, n, arr);
    }

}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ele;
    comb(ele, r, 0, n, arr);
    return 0;
}