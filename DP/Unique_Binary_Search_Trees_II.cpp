#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> dp(100, 0);

    dp[1] = 1;

    for(int i = 2; i < 100; i++){
        int op = 0;
        for(int j = 1; j <= i; j++){
            int left = max(1, j - 1);
            int right = max(1, i - j);
            op += (dp[left] * dp[right]);
        }

        dp[i] = op;
    }

    for(int i = 1; i < 10; i++){
        cout<<"val of "<<i<<" -> "<<dp[i]<<endl;
    }


    return 0;
}