#include<iostream>
#include<vector> 
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    string s1 = "abcdabc";
    string s2 = "abcezzz";

    string t1 = "3001";
    string t2 = "300";


    // 3001300
    // 3003001


    if(t1 > t2){
        cout<<t1<<endl;
    }else{
        cout<<t2<<endl;
    }

    int a = 100;
    int* b = &a;
    int *c = &a;

    cout<<"b is -> "<<b<<endl;
    cout<<"c is -> "<<c<<endl;

    cout<<"int max -> "<<INT_MAX<<endl;
    cout<<"long max -> "<<LONG_MAX<<endl;
    cout<<"long long max -> "<<LLONG_MAX<<endl;

    if(s1[3] > s2[3]){
        cout<<"S1"<<endl;
    }else{
        cout<<"S2"<<endl;
    }

    string s = to_string(123456789);

    cout<<typeid(a).name()<<endl;
    cout<<typeid(to_string(123456789)).name()<<endl;
    cout<<typeid(a).name()<<endl;
    cout<<(to_string(123456789)).length()<<endl;

    a = 7 & 0;
    cout<<"a is -> "<<a<<endl;

    s = "ABC";
    cout<<(int)s[0]<<endl;
    cout<<(char)67<<endl;

    cout<<-1 % 20<<endl;

    string s7 = "59669";
    cout<<(s7[1] - '0') * 10<<endl;

    int num = 7;
    int num2 = num >> 1;
    cout<<num2;

    return 0;
}