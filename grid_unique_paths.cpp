#include<iostream>
using namespace std;

int uniquePaths(int m, int n) {
    long arr[100][100];

    arr[0][0] = 0;
    for(int i = 1; i < 100; i++){
        arr[0][i] = 1;
        arr[i][0] = 1;
    }

    for(int i = 1; i < 100; i++){
        for(int j = 1; j < 100; j++){
            arr[i][j] = arr[i][j-1] + arr[i-1][j];
        }
    }

    return arr[m-1][n-1];
}

int main(){
    cout<<uniquePaths(100, 100)<<endl;

    return 0;
}