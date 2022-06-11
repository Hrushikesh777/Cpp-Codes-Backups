#include<iostream>
using namespace std;

int main(){
    int *arr = (int*)malloc(10*sizeof(int));
    arr[0] = 10;
    cout<<arr[0]<<endl;
    return 0;
}