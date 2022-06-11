#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int *res = new int[n];

    transform(arr1, arr1+n, arr2, res, minus<int>());

    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
