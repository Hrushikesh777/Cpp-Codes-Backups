#include<iostream>
using namespace std;

int main(){
    int num = 1;

    for(int i=10; i>0; i++){
        if(num % i != 0){
            num *= i;
        }
    }
    cout<<num<<endl;
    return 0;
}