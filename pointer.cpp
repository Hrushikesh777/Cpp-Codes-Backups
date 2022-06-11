#include<iostream>
#include<vector>
using namespace std;

void change(int &b){
    b = 30;
}

void change(int *b){
    *b = 30;
}

void change_arr(int arr[]){
    arr[0] = 100;
}

int main(){
    // int a[] = {1,2,3,4,5};
    /*
    pointer stores address of variable
    */

    // int *a = new int;
    // *a = 10;
    // cout<<a<<endl;
    // cout<<*a<<endl;
    // cout<<*(&(*a))<<endl;

    int b = 20;
    cout<<&b<<endl;
    cout<<b<<endl;
    change(&b); //calls to pointer function
    change(b); //calls to reference function
    cout<<b<<endl;

    // cout<<a<<endl;
    // cout<<&a[0]<<endl;
    // cout<<*(a+1)<<endl;
    // cout<<a[0]<<endl;
    // change_arr(a);
    // cout<<a[0]<<endl;

    // vector<int> vec{1, 2, 3, 4, 5};
    // cout<<vec[0]<<endl;
    // vec.erase(vec.begin());
    // cout<<vec[0]<<endl;
    // vec.erase(vec.begin());
    // cout << vec[0] << endl;

    return 0;
}