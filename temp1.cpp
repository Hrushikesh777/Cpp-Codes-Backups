#include <iostream>
#include <bitset>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <cmath>
using namespace std;

void fun1(int *ele){
    ele[0] = 100;
}

void fun2(vector<int> ele){
    ele[0] = 100;
}


int main()
{
    // bitset<32> bset1(2147483647);
    // cout<<"positive no : "<<bset1.to_ulong()<<endl;
    // bitset<32> bset2(-2147483647);
    // cout<<"negative no : "<<bset2.to_ulong()<<endl;
    // int temp = 2^5;
    // cout<<temp<<endl;
    // float x = 3/2;
    // cout<<3/float(2)<<endl;

    // string str;
    // str.push_back(90);

    // cout<<str<<endl;

    // int n = 12345;
    // string s = to_string(n);
    // cout<<s;

    // string s = "1@abcd";

    // if(isalnum(s[0])){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }

    // string s;
    // s.push_back(97);
    // cout<<s<<endl;

    // int temp = s[0];
    // cout<<temp<<endl;

    // map<int, deque<int>> temp;

    // temp[0].push_back(0);

    // cout<<temp[0].back()<<endl;
    // cout<<temp[0].size()<<endl;
    // int op = 1;

    // for(int i=0; i<100000; i++){
    //     for(int j=0; j<1000000; j++){
    //         op *= 20;
    //         op /= 20;
    //     }
    // }

    // cout<<op<<endl;

    // int arr[3] = {1,2,3};
    // vector<int> arr2 = {1,2,3};

    // cout<<arr2[0]<<endl;

    // fun2(arr2);

    // cout<<arr2[0]<<endl;

    // string s1 = "a";
    // string s2 = "A";

    // cout<<(s1 > s2)<<endl;

    void *ptr;   // void pointer declaration  
    int a=9;   // integer variable initialization  
    ptr=&a;   // storing the address of 'a' variable in a void pointer variable.  
    cout << &a << endl;  
    cout<<ptr<<endl;
    cout << *(int *)ptr << endl;  

    int temp = 1e5;
    int temp1 = pow(10, 5);
    cout<<temp<<" "<<temp1<<endl;

    return 0;
}
