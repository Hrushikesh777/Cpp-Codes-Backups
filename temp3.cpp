#include <bits/stdc++.h>
using namespace std;

int op = 0;

void fun(int *arr){
    arr[0] = 100;
}

int main(){

    int arr[3] = {1,2,3};
    fun(arr);
    op++;

    cout<<arr[0]<<endl;
    cout<<op<<endl;
    return 0;
}