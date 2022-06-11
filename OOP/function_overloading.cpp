#include<iostream>
using namespace std;

void foo(int a, int b){
    cout<<"hi"<<endl;
}

int foo(int a){
    return 5;
}

int main(){
    foo(5,4);
    cout<<foo(5)<<endl;
    return 0;
}