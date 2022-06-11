#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

void print_s(map<int, vector<char>> arr, int ip[], int n, int k, string op){
    int temp = ip[k];

    for(int i=0; i<arr[temp].size(); i++){
        op.push_back(arr[temp][i]);
        if(op.length() == n){
            cout<<op<<endl;
        }else{
            print_s(arr, ip, n, k+1, op);
        }
        op.pop_back();
    }
}

int main(){
    map<int, vector<char>> arr;
    char arr_2[] = {'a', 'b', 'c'};
    char arr_3[] = {'d', 'e', 'f'};
    char arr_4[] = {'g', 'h', 'i'};
    char arr_5[] = {'j', 'k', 'l'};
    char arr_6[] = {'m', 'n', 'o'};
    char arr_7[] = {'p', 'q', 'r', 's'};
    char arr_8[] = {'t', 'u', 'v'};
    char arr_9[] = {'w', 'x', 'y', 'z'};

    arr[2].assign(arr_2, arr_2 + 3);
    arr[3].assign(arr_3, arr_3 + 3);
    arr[4].assign(arr_4, arr_4 + 3);
    arr[5].assign(arr_5, arr_5 + 3);
    arr[6].assign(arr_6, arr_6 + 3);
    arr[7].assign(arr_7, arr_7 + 4);
    arr[8].assign(arr_8, arr_8 + 3);
    arr[9].assign(arr_9, arr_9 + 3);

    int ip[] = {2,3,4};
    string op = "";

    print_s(arr, ip, 3, 0, op);

    return 0;
}