#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <cstring>
#include <queue>
using namespace std;

int op;
bool arr[31];
unordered_map<int, int> snakes, ladders;

void find_throws()
{
    for(int i=1; i<=30; i++){
        arr[i] = false;
    }
    arr[1] = true;

    queue<pair<int, int>> q;
    q.push(make_pair(1, 0));

    while(!q.empty()){
        pair<int, int> temp = q.front();
        q.pop();

        if(temp.first == 30){
            break;
        }

        for(int i=temp.first; i<=temp.first+6; i++){
            if(!arr[i]){
                arr[i] = true;
                
            }
        }
    }
}

int main()
{
    //code
    int t, n, x, y;
    cin >> t;

    while (t--)
    {
        op = INT_MAX;
        snakes.clear();
        ladders.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            if (x > y)
            {
                snakes[x] = y;
            }
            else
            {
                ladders[x] = y;
            }
        }
        find_throws();
        cout <<"op is : "<<op << "\n";
    }
    return 0;
}