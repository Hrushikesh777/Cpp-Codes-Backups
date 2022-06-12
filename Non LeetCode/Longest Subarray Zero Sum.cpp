#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr)
{
    int sum = 0;
    int op = 0;
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        ;
        if (sum == 0)
        {
            op = max(op, i + 1);
        }
        else
        {
            if (map.find(sum) != map.end())
            {
                op = max(op, i - map[sum]);
            }
            else
            {
                map[sum] = i;
            }
        }
    }

    return op;
}

int main()
{
}
/*
s = 9
1 3  -1 4 -4
1 4 3 7 3
*/