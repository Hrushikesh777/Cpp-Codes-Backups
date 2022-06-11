#include<iostream>
using namespace std;

int main(){
    // const int a = 0;
    // a = 10; // not allowed

    int a = 10;
    // here we are directly changing value stored at meory location
    const int *i = &a;
    cout<<*i<<endl;
    a = 20;
    cout<<*i<<endl; 

    return 0;
}