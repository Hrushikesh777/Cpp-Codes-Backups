#include<iostream>
#include<vector>
using namespace std;

int binary_serach(int l, int r, vector<int> arr, int x){
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(arr[mid] == x){
            return mid;
        }

        if(x < arr[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    return -1;
}

int main(){

    return 0;
}