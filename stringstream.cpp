#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str = "This~~is~test~string~";
    stringstream s(str);

    // s >> str;

    string temp;

    // while(s >> temp){
    //     cout<<temp<<endl;
    // }

    while(getline(s, temp, '~')){
        cout<<temp<<endl;
    }

    return 0;
}