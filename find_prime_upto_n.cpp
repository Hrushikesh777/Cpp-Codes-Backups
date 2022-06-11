#include<iostream>
#include<cstring>
using namespace std;

int main(){

    bool arr[10001];
    memset(arr, true, sizeof(arr));

    for(int i=2; i*i<=10001; i++){
        if(arr[i] == true){
            for(int j=i*i; j<=10001; j += i){
                arr[j] = false;
            }
        }
    }

    // for(int i=2; i<=30; i++){
    //     if(arr[i]){
    //         cout<<i<<" ";
    //     }
    // }
    return 0;
}